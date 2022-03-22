#include "list.h"

void mx_push_index(t_list**list, void*data, int index)
{
	t_list *insert_elem = mx_create_node(data);
	int counter = 0;

	if(index < 0)
	{
		mx_push_front(list, data);
		free(insert_elem);
		insert_elem = NULL;
		return;
	}
	else
	{
		t_list *temp = *list;
		t_list *prev = temp;
		while(temp)
		{
			if(counter == index && counter == 0)
			{
				mx_push_front(list, data);
				free(insert_elem);
				insert_elem = NULL;
				return;
			}
			else if(counter == index)
			{
				prev->next = insert_elem;
				insert_elem->next = temp;
			}
			prev = temp;
			temp = temp->next;
			counter++;
		}

		if(counter <= index)
			prev->next = insert_elem;
	}
}

