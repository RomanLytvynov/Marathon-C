#include <stdio.h>
#include <stdlib.h>

char convert_to_literal(int i)
{
	return (char)(i+87);
}

char *mx_strnew(const int size)
{
	if(size <= 0) return NULL;
	char*s = (char*)malloc((size+1));
	for (int i = 0; i < size+1; ++i)
	{
		s[i] = '\0';
	}
	return s;
}

char*mx_nbr_to_hex(unsigned long nbr)
{
	char* s = mx_strnew(16);
	unsigned long nbr_temp = nbr;
	int i;
	for (i = 0; nbr!=0; ++i)
	{
		nbr/=16;
	}
	for (int j = i-1; j>=0; --j)
	{
		int result = nbr_temp % 16;
		s[j] = result > 9 ? convert_to_literal(result):(char)(nbr_temp%16 + 48);
		nbr_temp/=16;
	}
	if (s)
		return s;
	else
	{
		free(s);
		return NULL;
	}
}

