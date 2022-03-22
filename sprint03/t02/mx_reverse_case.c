#include <stdbool.h>

bool mx_islower(int c);
bool mx_isupper(int c);
char mx_tolower(int c);
char mx_toupper(int c);

void mx_reverse_case(char*s)
{
    int count = 0;
    while(*(s+count)!='\0')
    {
        count++;
    }
    for(int i = 0; i < count; i++)
    {
        if(mx_islower(s[i])) s[i] = mx_toupper(s[i]);

        else if(mx_isupper(s[i])) s[i] = mx_tolower(s[i]);

        else continue;
    }
}

