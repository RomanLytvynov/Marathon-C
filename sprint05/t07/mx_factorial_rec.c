#include <stdio.h>
#include <limits.h>

int mx_factorial_rec(int n)
{
	static long int counter = 1;
	counter*=n;
	if(counter > INT_MAX){
        return 0;
    }
    if (n == 1 || n ==0){
        return 1;
    }
    else 
        return n * mx_factorial_rec(n - 1);;
}

