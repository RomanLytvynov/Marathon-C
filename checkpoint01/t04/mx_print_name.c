#include <unistd.h>

void mx_printchar(char c){
    char* buffer = &c;
    write(1, buffer, 1);
}

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

int mx_strlen(const char*s)
{
	int i = 0;
	while(*(s+i)!='\0')
	{
		i++;
	}
	return i;
}

void mx_printint(int n)
{
	if(n < 0)
	{
		n*=-1;
		int size = schet(n);
		char result[size+1];
		for(int i = 0; i < size+1; ++i)
  	{
  		if (i == size)
  		{
  			result[0] = '-';
  			break;
  		}
   	 	result[size-i] = (char)((n % 10)+48);
    	n /= 10; 
  	}

		for (int i = 0; i < size+1; ++i)
		{
			mx_printchar(result[i]);
		}
	}
	else
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
}

int main(int argc, char const *argv[])
{
	write(1, argv[0], mx_strlen(argv[0]));
	write(1, "\n", 1);
	mx_printint(argc);
	write(1, "\n", 1);
	return 0;
}

