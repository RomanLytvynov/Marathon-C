#include <unistd.h>

void mx_printstr(const char*s)
{
    for(int i = 0; *(s + i) != '\0'; i++)
    {
        const char* buff = &s[i];
        write(1, buff, 1);
    }
}

