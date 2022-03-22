#include "header.h"

void mx_check_map(char * maze, int x1, int y1, int x2, int y2)
{
    int counter = 0;
    for(int i = 0; *(maze + i); i++)
    {
        if(maze[i] == '\n') 
        {
            counter++;
        }
        if(counter == 0 && y1 == counter)
        {
            if(maze[i + x1] == '#')
            {
                mx_printerr("entry point cannot be an obstacle\n");
                exit(-1);
            }
            else break;
        }
        if(y1 == counter)
        {
            if(maze[++i + x1] == '#')
            {
                mx_printerr("entry point cannot be an obstacle\n");
                exit(-1);
            }
            else break;
        }
    }
    counter = 0;
    for(int i = 0; *(maze + i); i++)
    {
        if(maze[i] == '\n') 
        {
            counter++;
        }
        if(counter == 0 && y2 == counter)
        {
            if(maze[i + x2] == '#')
            {
                mx_printerr("exit point cannot be an obstacle\n");
                exit(-1);
            }
            else break;
        }
        if(y2 == counter)
        {
            if(maze[++i + x2] == '#')
            {
                mx_printerr("exit point cannot be an obstacle\n");
                exit(-1);
            }
            else break;
        }
    }
}

