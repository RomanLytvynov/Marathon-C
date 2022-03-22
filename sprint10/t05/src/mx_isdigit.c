#include <stdbool.h>

bool mx_isdigit(int c) {
    return ((c >= 0 && c <= 9) || (c >= 48 && c <= 57)) ? true : false;
}

