#include <stdbool.h>
#include <stdio.h>

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char*str)
{
	int chislo = 0;
	int i = 0;

	if(!mx_isdigit(str[i])&&i==0) return 0;	
	else
	{
		chislo = (int)(str[i]-48);
		i++;
	}
	while(*(str+i) != '\0')
	{
		if(mx_isspace(str[i]) || !mx_isdigit(str[i])) return chislo;
		chislo*=10;
		chislo+=(int)(str[i]-48);
		i++;		
	}
	return chislo;
}

