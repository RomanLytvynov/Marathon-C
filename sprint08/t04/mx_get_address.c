#include "get_address.h"

char *mx_get_address(void *p)
{
	unsigned long addr_int = (unsigned long)p;
  	char *addr_str = mx_strnew(mx_strlen(mx_nbr_to_hex(addr_int)));
  	mx_strcpy(addr_str, "0x");
  	mx_strcpy(&addr_str[2], mx_nbr_to_hex(addr_int));
  	if(p == NULL)
  	{
  		free(addr_str);
  		return NULL;
  	}
  	return addr_str;
}

