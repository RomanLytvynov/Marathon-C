#include <limits.h>
#include <stdio.h>

int mx_factorial_iter(int n)
{
	if(n < 0) return 0;
	long int counter = 1;
	for (int i = 1; i <= n; ++i)
	{
		counter*=i;
		if (counter > INT_MAX)
		{
			return 0;
		}
	}
	return counter;
}

