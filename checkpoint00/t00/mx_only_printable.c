#include <unistd.h>

void mx_printchar(char c)
{
    char* buffer = &c;
    write(1, buffer, 1);
}

void mx_only_printable(void)
{
    for(int i = 126; i > 31; i--)
    {
        char a = (char)i;
        mx_printchar(a);
    }
    mx_printchar('\n');
}

