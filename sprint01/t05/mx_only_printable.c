#include <unistd.h>
#include "mx_printchar.c"

void mx_only_printable()
{
    for (int i = 126; i >= 33; i--)
    {
        char a = (char)i;
        mx_printchar(a);
        write(1, "\n", 1);
    }
}

