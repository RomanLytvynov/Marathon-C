#include <stdio.h>

int mx_length(const char*s)
{
    int i = 0;
	while(*s!='\0')
	{
		i++;
		s++;
	}
	return i;
}

int mx_return_difference(char s1, char s2)
{
    return (int)s1 - (int)s2;
}

int mx_strcmp(const char*s1, const char*s2)
{
    if(mx_length(s1) > mx_length(s2))
    {
        for(int i = 0; i < mx_length(s2)+1; i++)
        {
            if(s1[i] == s2[i]) continue;
            else return mx_return_difference(s1[i], s2[i]);
        }
        return 0;
    }
    else if(mx_length(s1) < mx_length(s2))
    {
        for(int i = 0; i < mx_length(s1)+1; i++)
        {
            if(s1[i] == s2[i]) continue;
            else return mx_return_difference(s1[i], s2[i]);
        }
        return 0;
    }
    else
    {
        for(int i = 0; i < mx_length(s1); i++)
        {
            if(s1[i] == s2[i]) continue;
            else return mx_return_difference(s1[i], s2[i]);
        }
        return 0;
    }
}

