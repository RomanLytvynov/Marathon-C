#include <stdio.h>

int mx_strlen(const char *s)
{
    int counter = 0;
    for(int i = 0; i < *(s + i); i++) counter++;
    return counter;
}


void mx_swap_char(char*s1, char*s2)
{
    char ch = *(s1 + 0);
    *s1 = *s2;
    *s2 = ch; 
}

void mx_str_reverse(char*s)
{
    int count = mx_strlen(s);
    for (int i = 0, j = count - 1; i < count/2; i++, j--)
    {
        mx_swap_char(&s[i], &s[j]);
    }
}

