#include <stdio.h>

int mx_max(int a, int b, int c)
{
	int arr[3] = {a, b, c};
	int max = arr[0];
	for (int i = 1; i < 3; ++i)
	{
		if(arr[i] > max) max = arr[i];
	}
	return max;
}

