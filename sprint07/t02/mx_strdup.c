#include <stdlib.h>

char *mx_strnew(const int size);

int mx_strlen(const char*s);

char *mx_strcpy (char*dst, const char*src);

char *mx_strdup(const char*str)
{
	if (str == NULL)return NULL;
	char *dup = mx_strnew(mx_strlen(str));
	dup = mx_strcpy(dup, str);
	return dup;
}

