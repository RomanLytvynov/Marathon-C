#include "header.h"

char **mx_charmaze(char *map_no, int size_y, int size_x){
    int i = 0, count_for_y = 0, count_for_x = 0;
    char **map_main = (char**)malloc(size_y*sizeof(char*));
    for(i = 0; i < size_y; i++)
        map_main[i] = (char*)malloc(size_x*sizeof(char));
    i = 0;
    while(*(map_no + i)!='\0')
    {
        if(map_no[i] == '\n')
        {
            i++;
            count_for_y++;
            count_for_x = 0;
            continue;
        }
        map_main[count_for_y][count_for_x] = map_no[i];
        count_for_x++;
        i++;
    }
    return map_main;
}
