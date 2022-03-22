#include "only_smiths.h"

void mx_exterminate_agents(t_agent***agents)
{
	int i = 0;
	while((*agents)[i]!=NULL)
	{
		free((*agents)[i] -> name);
		(*agents)[i] -> name = NULL;
		i++;
	}
	free(*agents);
	*agents = NULL;
}

