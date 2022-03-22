#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>

typedef struct s_coord{

    int x, y;

} t_coord;

char *mx_strnew(const int size);
int mx_atoi(const char *str);
void mx_printerr(const char*s);
int mx_strlen(const char*s);
void mx_printchar(char c);
void mx_printint(int n);
char *mx_file_to_str(const char *filename); 
char *mx_file_to_str1(const char *filename);
void mx_printstr(const char *s);
int mx_max(int **arr,int ax, int ay,int He, int Wi, char **final);
bool mx_lee(int **arr, int size_x, int size_y, t_coord * point1, t_coord * point2, int*pathX, int*pathY, int*ext);
int **mx_intmaze(char *map_no, int size_y, int size_x);
char **mx_charmaze(char *map_no, int size_y, int size_x);
void mx_write_to_file(char ** str, int size_y, int size_x);
void mx_check_map(char * maze, int x1, int y1, int x2, int y2);


#endif

