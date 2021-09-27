#include "header.h"

void mx_write_to_file(char ** str, int size_y, int size_x)
{
    int fd_inp = 0;
	fd_inp = open("path.txt", O_CREAT | O_WRONLY, 00200 | 00400);

    for(int i = 0; i < size_y; i++)
    {
        for(int j = 0; j < size_x; j++)
        {
            write(fd_inp, &str[i][j], 1);
        }
          write(fd_inp, "\n", 1);
    }

}

