#include "header.h"

int main (int argc, char * argv[])
{
    if(argc != 6) {
        mx_printerr("usage: ./way_home [file_name] [x1] [y1] [x2] [y2]\n");
        exit(-1);
    }

    int x1 = mx_atoi(argv[2]), x2 = mx_atoi(argv[4]), y1 = mx_atoi(argv[3]), y2 = mx_atoi(argv[5]);

    int fd = open(argv[1], O_RDONLY);
    if(fd < 0) 
    {
        mx_printerr("map does not exist\n");
        exit(-1);
    }

    int counter1 = 0;
    int counter2 = 0;

    char * maze_temp = mx_file_to_str(argv[1]);
    for(int i = 0; maze_temp[i]; i++)
    {   
        if(maze_temp[i]=='\n') counter2++;
    }
    for(int i = 0; maze_temp[i]; i++)
    {   
        if(maze_temp[i]!='\n') counter1++;
        else break;
    }
    if(x1 > counter1 
    || y1 > counter2
    || x2 > counter1
    || y2 > counter2){
        mx_printerr("points are out of map range\n");
        exit(-1);
    }

    int size_x = counter1, size_y = counter2;
    char * maze = mx_file_to_str1(argv[1]);
    int **intmaze1 = mx_intmaze(maze, size_y, size_x);
    int **intmaze2 = mx_intmaze(maze, size_y, size_x);
    char ** double_maze = mx_charmaze(maze, size_y, size_x);

    mx_check_map(maze, x1, y1, x2, y2);

    int ext = 0;

    t_coord *point1 = (t_coord *)malloc(sizeof(t_coord));
    point1->x = x1;
    point1->y = y1;

    t_coord *point2 = (t_coord *)malloc(sizeof(t_coord));
    point2->x = x2;
    point2->y = y2;

    int pathX[size_x * size_y], pathY[size_x * size_y];
    if(!mx_lee(intmaze1, size_x, size_y, point1, point2, pathX, pathY, &ext))
    {
        mx_printerr("road not found\n");
        exit(-1);
    }
    else
    {
        for (int i = 0; i < ext; ++i)
            double_maze[pathY[i]][pathX[i]] = '*';
        double_maze[point2->y][point2->x] = '*';

        int dist = mx_max(intmaze2, point1->x, point1->y, size_y, size_x, double_maze);
        mx_printstr("dist=");
        mx_printint(dist);
        mx_printchar('\n');
        mx_printstr("exit=");
        mx_printint(ext);
        mx_printchar('\n');
        mx_write_to_file(double_maze, size_y, size_x);
    }

    for(int i = 0; i < size_y; i++){
        free(intmaze1[i]);
    }
    free(intmaze1);

    for(int i = 0; i < size_y; i++){
        free(intmaze2[i]);
    }
    free(intmaze2);

    for(int i = 0; i < size_y; i++){
        free(double_maze[i]);
    }
    free(double_maze);
    free(point1);
    free(point2);

    return 0;
}

