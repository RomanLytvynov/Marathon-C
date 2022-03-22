#include "hex_to_nbr.h"
#include <stdio.h>

unsigned long mx_hex_to_nbr(const char*hex)
{
	if (hex == NULL){
        return 0;
    }
    int j = 0;
    while (hex[j] != '\0'){
        j++;
    }
    unsigned long res = 0;
    unsigned long pow = 1;
    for (int i = j - 1; i >=0; i--){
        if (mx_isdigit(hex[i])){
            res += ((hex[i] - 48) * pow);
            pow *= 16;
        }   
        else if(mx_isalpha(hex[i]))
        {
            if(mx_isupper(hex[i]))
            {
                res += ((hex[i] - 55) * pow);
                pow *= 16;
            }
            else 
            {
                res += ((hex[i] - 87) * pow);
                pow *= 16;
            }
        }
        else return 0;
    }
    return res;
}

