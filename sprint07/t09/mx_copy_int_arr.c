#include <stdlib.h>

int*mx_copy_int_arr(const int*src, int size)
{
	if(src == NULL) return NULL;
	if(size <=0) return NULL;
	int *newArr = (int*)malloc(size*sizeof(src));
	for (int i = 0; i < size; ++i)
	{
		newArr[i] = src[i];
	}
	return newArr;
}

