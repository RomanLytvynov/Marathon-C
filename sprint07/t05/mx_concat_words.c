#include <stdlib.h>

char*mx_strjoin(const char *s1, const char *s2);

void mx_strdel(char**str);

char*mx_strcpy (char*dst, const char*src);

char*mx_strnew(const int size);

int mx_strlen(const char*s);

char*mx_strcat(char*s1, const char*s2);

char*mx_concat_words(char**words)
{
	if(words == NULL) return NULL;

	int common_size = 0;
	int common_spaces = -1;
	for (int i = 0; words[i]!=NULL; ++i)
	{
		common_size+=mx_strlen(words[i]);
		common_spaces+=1;
	}

	char * string = mx_strnew(common_size + common_spaces);
	int inside_counter = 0;
	for (int i = 0; words[i]!=NULL; ++i)
	{
		string = mx_strjoin(string, words[i]);
		if(inside_counter < common_spaces)
		{
			string = mx_strjoin(string, " ");
			inside_counter++;
		}
	}

	static char s[10];
	mx_strcpy(s, string);
	mx_strdel(&string);

	return s;
}

