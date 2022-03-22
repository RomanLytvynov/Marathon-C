#include <unistd.h>
#include "mx_printchar.c"

void mx_print_alphabet()
{
    int i = 96;
    while(i != 122)
    {
        i-=31;
        mx_printchar((char) i);
        i+=33;
        mx_printchar((char) i);
    }
    write(1, "\n", 1);
}

