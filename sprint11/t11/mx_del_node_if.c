#include "list.h"

void mx_pop_back(t_list**list)
{
	if (!*list) return;

	t_list *temp = *list;
	t_list *prev = NULL; 
    while (temp -> next){
    	prev = temp;
    	temp = temp -> next;
    }
    free(prev->next);
    prev->next = NULL;
    temp = NULL;
}

void mx_pop_front(t_list**list)
{
	if (!*list || !list)return;

	if((*list)->next == NULL)
	{
		free(*list);
		*list = NULL;
		return;
	}

	t_list *temp = (*list)->next;
	free(*list);
	*list = temp;
}

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
			mx_pop_back(list);
	}
}

void mx_del_node_if(t_list**list, void*del_data, bool(*cmp)(void*a, void*b))
{
	int count = 0;
	t_list *tmp = *list;
	while(tmp)
	{	
		if(cmp(del_data, tmp->data)) 
		{
			mx_pop_index(list, count);
			tmp = *list;
			count = 0;
			continue;
		}
		tmp = tmp->next;
		count++;
	}
	return;
}

