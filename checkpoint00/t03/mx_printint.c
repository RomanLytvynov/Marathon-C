#include <unistd.h>

void mx_printchar(char c)
{
    char* buffer = &c;
    write(1, buffer, 1);
}

int amount_digits(int n)
{
	int am = 0;
    if (n/10==0)
      return 1;
   else
     {
        while (n>0) 
         {
         	n=n/10;
         	am+=1;
         }
         return am;
     }     
 
}

void mx_printint(int n)
{
    if(n < 0) 
    {
        mx_printchar('-');
        n*=-1;
    }
    int size = amount_digits(n);
    char result [size];
    for(int i = size - 1; i > -1; i--)
    {
        result[i] = (char)((n%10) + 48);
        n/=10;
    }
    for(int i = 0; i < size; i++) mx_printchar(result[i]);
}

int main()
{
    mx_printint(-2147483648);
    return 0;
}
