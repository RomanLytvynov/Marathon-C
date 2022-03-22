#include "parse_agents.h"
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char *mx_file_to_str(const char *filename){
    errno = 0;
    int file_r = open(filename, O_RDONLY);
    if(errno != 0){
        mx_printerr("error\n");
        exit(0);
    }
    char symb;
    char *str;
    int res, len = 0, i = 0;
    if(errno == 0){
        while((res = read(file_r, &symb, 1)) > 0){
            len++;
        }
        close(file_r);
        file_r = open(filename, O_RDONLY);
        str = malloc(sizeof(char) * len);
        while((res = read(file_r, &symb, 1)) > 0){
            str[i] = symb;
            i++;
        }
    }
    else
        return NULL;
    str[len] = '\0';
    close(file_r);
    return str;
}

