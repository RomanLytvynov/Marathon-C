#include "list.h"

int mx_list_size(t_list *list)
{
	int counter = 0;
	if(!list) return counter;
	else
	{
		while(list)
		{
			list = list -> next;
			counter++;
		}
	}
	return counter;
}

