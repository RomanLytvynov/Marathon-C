#include "header.h"

void mx_printstr(const char *s) {
    int l = 0;
    char i = s[0];

    while(i != '\0'){
        l++;
        i = s[l];
    }

    write(1, s, l);
}

