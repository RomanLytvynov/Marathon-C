#include "parse_agents.h"

int mx_atoi(const char *str) {
    int begin = -1, finish = -1, sign = 0, result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == '-') && (mx_isdigit(str[i + 1]) == true)) {
            sign = 1;
            continue;
        } 
        if ((str[i] == '+') && (mx_isdigit(str[i + 1]) == true))
            continue;
        if ((mx_isspace(str[i]) == false) && (begin == -1))
            begin = i;
        if ((begin > -1) && (mx_isdigit(str[i]) == false) && (finish == -1)){
            if(!mx_isspace(str[i]))
                return 0;
            finish = i;
            
        }
    }

    if (finish == -1)
        for (int i = begin; str[i] != '\0'; i++)
            result = 10 * result + (int)str[i] - 48;
    else
        for (int i = begin; i < finish; i++)
            result = 10 * result + (int)str[i] - 48;

    return sign == 0 ? result : -1 * result;
}

