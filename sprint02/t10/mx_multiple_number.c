#include <stdio.h>
#include <stdbool.h>

bool mx_multiple_number(int n, int mult)
{
	if(n == 0)
		return false;
	else
	{
		if(mult%n == 0) return true;
		else return false;
	}
}

