#include <stdio.h>
#include <stdbool.h>

bool mx_isspace(char c)
{
	if((int) c == 32)
		return 1;
	else return 0;
}

int main()
{
	if(mx_isspace('\t')) printf("It is space");
	else printf("So cool");
	return 0;
}

