#ifndef HEADER_H
#define HEADER_H

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *mx_strdup(const char*str);
char *mx_strcpy (char*dst, const char*src);
int mx_strlen(const char*s);
char *mx_strnew(const int size);
char *mx_strcat(char*s1, const char*s2);
char *mx_strjoin(const char *s1, const char *s2);
int mx_count_words(const char*str, char delimiter);
bool mx_isspace(char c);
void mx_printint(int n);
void mx_printchar(char c);
void mx_printstr(const char*s);
char *mx_file_to_str(const char*filename);
void mx_printerr(const char*s);
int mx_strlen(const char*s);

#endif

