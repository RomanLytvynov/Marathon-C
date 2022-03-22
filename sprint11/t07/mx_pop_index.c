#include "list.h"

void mx_pop_index(t_list**list, int index)
{
	int counter = -1;

	if(index < 0) mx_pop_front(list);

	else 
	{
		t_list *temp = *list;
		t_list *prev = temp;
		while(temp)
		{
			counter++;
			if(counter == index && counter == 0)
			{
				mx_pop_front(list);
				return;
			}
			else if(counter == index)
			{
				prev->next = temp->next;
				t_list *temp1 = temp;
				free(temp);
				temp = temp1->next;
				if(!temp) break;
			}
			prev = temp;
			temp = temp->next;
		}
		if(counter < index)
		{
			mx_pop_back(list);
		}
	}
}

