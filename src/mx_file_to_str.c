#include "header.h"

char *mx_file_to_str(const char *filename) 
{
    if (!filename) {
        exit(-1);
    }

    int file = open(filename, O_RDONLY);
    char buff;
    int memory = 0;
    while(read(file , &buff, 1)) {
        if (buff == '#' || buff == '.' || buff == '\n') {
            memory++;
        }
        else if ( buff != ',') {
            mx_printerr("map error\n");
            exit(-1);
        }
    }
    close(file);
    if (memory == 0) {
        mx_printerr("map does not exist\n");
        exit(-1);
    }
    file = open(filename, O_RDONLY);
    char *map_string = (char *)malloc(memory + 1);
    int i = 0;
    while (read(file, &buff, 1)) {
        if (buff == '#' || buff == '.' || buff == '\n') {
            map_string[i] = buff;
            i++;
        }
    }
    close(file);

    if(map_string[memory - 1] != '\n') {
        map_string[memory] = '\n';
    }
    
    return map_string;
}
