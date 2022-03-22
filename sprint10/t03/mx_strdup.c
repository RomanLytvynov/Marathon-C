#include "file_to_str.h"

char *mx_strdup(const char*str)
{
	char *dup = mx_strnew(mx_strlen(str));
	mx_strcpy(dup, str);
	return dup;
}

