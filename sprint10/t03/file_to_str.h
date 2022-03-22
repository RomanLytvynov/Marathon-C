#ifndef FILE_TO_STR_H
#define FILE_TO_STR_H

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *mx_file_to_str(const char*filename);
char *mx_strdup(const char*str);
char *mx_strcpy (char*dst, const char*src);
int mx_strlen(const char*s);
char *mx_strnew(const int size);
char *mx_strcat(char*s1, const char*s2);
char *mx_strjoin(const char *s1, const char *s2);

#endif

