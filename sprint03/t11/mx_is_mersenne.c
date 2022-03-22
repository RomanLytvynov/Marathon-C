#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_prime(int num);

bool mx_is_mersenne(int n)
{
	for(int i = 0; (mx_pow(2, i) - 1 ) <= n ; i++)
	{
		if(mx_pow(2, i) - 1 == n)
		{
			if(mx_is_prime(n)) return true;
		}
		if(mx_pow(2, i) - 1 > n) return false;
	}
	return false;
}

