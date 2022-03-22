#include "file_to_str.h"

char *mx_strjoin(const char *s1, const char *s2)
{
	if(s1 == NULL && s2 == NULL) return NULL;
	else if(s1 == NULL || s2 == NULL) 
	{
		if (s1 == NULL)
		{
			char*new_cat = mx_strdup(s2);
			return new_cat;
		}
		else
		{
			char*new_cat = mx_strdup(s1);
			return new_cat;
		}
	}
	else
	{
		int cat_size = mx_strlen(s1) + mx_strlen(s2);
		char*cat = mx_strnew(cat_size);
		cat = mx_strcat(mx_strdup(s1), mx_strdup(s2));
		cat[cat_size] = '\0';

		return cat; 
	}
}

