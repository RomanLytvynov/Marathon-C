#include <stdlib.h>
#include <stdbool.h>

char*mx_strnew(const int size);

void mx_strdel(char**str);

int mx_strlen(const char*s);

bool mx_isspace(char c);

char *mx_strncpy(char *dst, const char *src, int len);

char*mx_strtrim(const char*str)
{
	char*exit = mx_strnew(mx_strlen(str));
	int i, j;

	for (i = 0; i < mx_strlen(str); ++i)
	{
		if(!mx_isspace(str[i]))
		{
			break;
		}
	}
	for (j = mx_strlen(str) - 1; j >= 0; --j)
	{
		if(!mx_isspace(str[j]))
		{
			j++;
			break;
		}
	}
	mx_strncpy(exit, &str[i], j-i);

	static char trimmed[10];
	mx_strncpy(trimmed, exit, mx_strlen(exit));
	mx_strdel(&exit);

	return trimmed;
}

