#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

char*mx_strnew(const int size);

void mx_strdel(char**str);

int mx_strlen(const char*s);

bool mx_isspace(char c);

char*mx_strtrim(const char*str);

char *mx_strncpy(char *dst, const char *src, int len);

char*mx_del_extra_whitespaces(const char*str)
{
	char* s = mx_strnew(mx_strlen(str));

	s = mx_strtrim(str);

	for (int i = 0; *(s+i); ++i)
	{
		if(mx_isspace(s[i]))
		{
			if((int)s[i] != 32) s[i] = ' ';
			int j = i;
			while(mx_isspace(s[j]))
			{
				j++;
			}
			if(j-1 == i) continue;
			else
			{
				int counter = 1;
				while(*(s+j)!='\0')
				{
					s[i+counter]=s[j];
					j++;
					counter++;
				}
				s[i+counter] = '\0';
			} 
		}
	}
	return s;
}

