#include "duplicate.h"
#include <stdio.h>

t_intarr *mx_del_dup_sarr(t_intarr *src) 
{
  	if (src == NULL) return NULL;

 	for (int i = 0; i < src->size; ++i)
	{
		for (int j = i + 1; j < src->size; ++j)
		{
			if(src->arr[i] == src->arr[j])
			{
				for (int k = j; k < src->size - 1; ++k)
				{
					src->arr[k] = src->arr[k+1];
				}
				src->size--;
				j--;
			}
		}
	}

    t_intarr *res = malloc(8);

    if(res)
    {
    	res->size = src->size;
    	res->arr = mx_copy_int_arr(src->arr, res->size);
    	return res;
    }
    free(res);
    return NULL;
}

