#include <stdlib.h>

char*mx_strnew(const int size)
{
	char*s = (char*)malloc((size+1) * sizeof(char));
	if(size < 0) return NULL;
	else
	{
		for (int i = 0; i < size+1; ++i)
		{
			s[i] = '\0';
		}
	}
	return s;
}

int mx_strlen(const char*s)
{
	int i = 0;
	while(*(s+i)!='\0')
	{
		i++;
	}
	return i;
}

char*mx_strcpy (char*dst, const char*src)
{
    int i;
    for(i = 0; i < *(src + i); i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}

char*mx_strdup(const char*str)
{
	char *dup = mx_strnew(mx_strlen(str));
	mx_strcpy(dup, str);
	return dup;
}

