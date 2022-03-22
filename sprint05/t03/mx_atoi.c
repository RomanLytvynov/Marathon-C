#include <stdbool.h>

bool mx_isdigit(int c);

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
            if(!mx_isdigit(str[j]) && str[j]!='\0') return 0;
            else return chislo;
        }
        else if((int)str[i] == 45) //-
        {
            if(!mx_isdigit(str[i+1])) return 0;

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
        else if((int)str[i] == 43) //+
        {
            if(!mx_isdigit(str[i+1])) return 0;
            chislo = (int)(str[i+1]-48);
            i+=2;
            j = i;
            while(mx_isdigit(*(str+j)))
            {
                chislo*=10;
                chislo += (int)(str[j]-48);
                j++;
            }
            if(!mx_isdigit(str[j]) && str[j]!='\0') return 0;
            else return chislo;
        }
        else return 0;
        i++;
	}
    return 0;
}

