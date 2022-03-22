#include <stdio.h>

int mx_isdigit(int i)
{
    if(i > 47 && i < 58) return 1;
    else return 0;
}

int mx_atoi(const char*str)
{
    int chislo = 0;
	int i = 0, j = 0;
	while(*(str+i) != '\0')
	{
		if(mx_isdigit(str[i]))	
        {
            chislo = (int)(str[i]-48);
            i++;
            j = i;
            while(mx_isdigit(*(str+j)))
            {
                chislo*=10;
                chislo += (int)(str[j]-48);
                j++;
            }
            return chislo;
        }
        else if((int)str[i] == 45)
        {
            if(str[i+1] == ' ') return 0;
            chislo = (int)(str[i+1]-48);
            i+=2;
            j = i;
            while(mx_isdigit(*(str+j)))
            {
                chislo*=10;
                chislo += (int)(str[j]-48);
                j++;
            }
            return -1*chislo;
        }
        else if((int)(str[i]) == 32)
        {
            i++;
            continue;
        }
        else return 0;
        i++;
	}
    return 0;
}
int main()
{
    printf("%d\n", mx_atoi("- 1050538442"));
    return 0;
}

