#include "header.h"

char *mx_strcat(char*s1, const char*s2)
{
	int i = mx_strlen(s1);

	while((*(s1+i) = *s2++)) i++;

	return s1;
}

