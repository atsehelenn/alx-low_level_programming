#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - to print whether a number is positive negative or zer0
 * Return: Always 0 (Success)
*/
int main(void)
{
        int n;
        srand(time(0));
	n = rand() - RAND_MAX / 2;
       if (n > 0)
       {
	  printf("The number is positive\n", n);
       }
       else if (n == )
       {
	 printf("The number is zero\n", n);
       }
       else 
       {
           printf("The number  is negative\n", n);
}
 return (0);
 }
