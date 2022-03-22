#include "list.h"
#include <stdlib.h>

void mx_push_front(t_list**list, void*data)
{
	if(!*list)
	{
		*list = mx_create_node(data);
		return;
	}
	t_list *temp = mx_create_node(data);
	temp->next = *list;
	*list = temp;
}

int main()
{
	t_list *paths = NULL;
	mx_push_front(&paths, "path1");
	mx_push_front(&paths, "path2");
	mx_push_front(&paths, "path3");
	mx_push_front(&paths, "path4");

	for (int i = 0; paths!=NULL; ++i)
	{
		printf("%s\n", paths->data);
		paths = paths->next;
	}

	return 0;
}

