#include "parse_agents.h"
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>


bool compare_name(t_agent* ag1, t_agent* ag2){
    return mx_strcmp(ag1->name, ag2->name) < 0 ? true : false;
}

bool compare_power(t_agent* ag1, t_agent* ag2){
    return ag1->power < ag2->power ? true : false;
}

bool compare_strength(t_agent* ag1, t_agent* ag2){
    return ag1->strength < ag2->strength ? true : false;
}

void sort(t_agent **arr, bool (*compare)(t_agent*, t_agent*), int size){
    bool was_swap = true;
    t_agent* temp = malloc(sizeof(t_agent));
    while(was_swap){
        was_swap = false;
        for(int i = 1; i < size; i++){
            if(compare(arr[i], arr[i - 1])){
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                was_swap = true;
            }
        }
    }
}

int main(int argc, char *argv[]){
    if(argc != 3 || mx_strlen(argv[1]) > 2){
        mx_printerr("usage: ./parse_agents [-p | -s | -n] [file_name]\n");
        exit(0);
    }
    char *str = mx_file_to_str(argv[2]);
    int amount = mx_count_substr(str, "agent");
    int k = 0;
    t_agent **arr = (t_agent**)malloc(amount * sizeof(t_agent*));
    for(int i = 0; i < amount; i++){
        arr[i] = (t_agent*)malloc(sizeof(t_agent) * amount);
    }
    
    char good_str1[] = "agent {\n\tname: ";
    char good_str2[] = "\tpower: ";
    char good_str3[] = "\tstrength: ";
    char good_str4[] = "}\n";
    char *temp;
    for(int i = 0; i < amount; i++){
        for(int j = 0; j < mx_strlen(good_str1); j++){
            if(*str != good_str1[j]){
                mx_printerr("error\n");
                exit(0);
            }
            str++;
        }
        temp = malloc(50);
        while(*str != '\n'){
            temp[k] = *str;
            str++; k++;
        }
        arr[i]->name = temp;
        free(temp);
        temp = malloc(50);
        arr[i]->name[k] = '\0';
        str++;
        for(int j = 0; j < mx_strlen(good_str2); j++){
            if(*str != good_str2[j]){
                mx_printerr("error\n");
                exit(0);
            }
            str++;
        }

        arr[i]->power = mx_atoi(str);

        int n = arr[i]->power;
        while (n > 0) {
            n /= 10;
            str++;
        }
        str++;
        for(int j = 0; j < mx_strlen(good_str3); j++){
            if(*str != good_str3[j]){
                mx_printerr("error\n");
                exit(0);
            }
            str++;
        }

        arr[i]->strength = mx_atoi(str);

        n = arr[i]->strength;
        while (n > 0) {
            n /= 10;
            str++;
        }
        str++;
        for(int j = 0; j < mx_strlen(good_str4); j++){
            if(*str != good_str4[j]){
                mx_printerr("error\n");
                exit(0);
            }
            str++;
        }
        k = 0;
    }

    
    switch(argv[1][1]){
        case 'p':
            sort(arr, compare_power, amount);
            break;
        case 's':
            sort(arr, compare_strength, amount);
            break;
        case 'n':
            sort(arr, compare_name, amount);
            break;
        default:
            mx_printerr("usage: ./parse_agents [-p | -s | -n] [file_name]\n");
            exit(0);
    }


    for (int i = 0; i < amount; i++)
    {
        mx_printstr("agent: ");
        mx_printstr(arr[i]->name);
        mx_printstr(", strength: ");
        mx_printint(arr[i]->strength);
        mx_printstr(", power: ");
        mx_printint(arr[i]->power);
        mx_printchar('\n');
    }
    
    mx_exterminate_agents(&arr);



    return 0;
}
