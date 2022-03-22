#include "header.h"

int **mx_intmaze(char *map_no, int size_y, int size_x){
    int i = 0, count_for_y = 0, count_for_x = 0;
    char map_main[size_y][size_x];
    
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

    int **arr = (int**)malloc(size_y*sizeof(int*));
    for(i = 0; i < size_y; i++)
        arr[i] = (int*)malloc(size_x*sizeof(int));

    for(i = 0; i < size_y; i++)
    {
        for(int j = 0; j < size_x; j++)
        {
            if(map_main[i][j] == '#')
                arr[i][j] = -1;
            else arr[i][j] = -2;
        }
    }
    return arr;
}
