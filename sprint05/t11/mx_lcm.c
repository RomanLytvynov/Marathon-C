#include <stdio.h>

int mx_gcd(int a, int b);

int mx_lcm(int a, int b)
{
	if(a < 0) a*=-1;
	if(b < 0) b*=-1;
	if(a==0 && b==0) return 0;

	int biggest = a < b? b : a;
	int i = 0;
	int step = mx_gcd(a,b);
	for (i = biggest; (i%a != i%b); i+=step){}

	return i;
}

