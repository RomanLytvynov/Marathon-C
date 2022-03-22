#include <unistd.h>
#include "mx_printchar.c"

int schet(int n)
{
	int kol = 0;
    if (n/10==0)
      return 1;
   else
     {
        while (n>0) 
         {
         	n=n/10;
         	kol+=1;
         }
         return kol;
     }     
 
}

void mx_printint(int n);

int main()
{
	mx_printint(2);
	return 0;
}

void mx_printint(int n)
{
	int size = schet(n);
	char result[size];
	for(int i=0; i<size; ++i)
  	{
   	 	result[size-1-i] = (char)((n % 10)+48);
    	n /= 10; 
  	}

	for (int i = 0; i < size; ++i)
	{
		mx_printchar(result[i]);
	}
}

