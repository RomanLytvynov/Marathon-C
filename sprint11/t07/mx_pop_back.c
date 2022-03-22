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

