#include <unistd.h>

void mx_printchar(char c){
    char* buffer = &c;
    write(1, buffer, 1);
    write(1, "\n", 2);
}

