#include <stdio.h>
#include <stdlib.h>
/**
 * main - to print whether a number is positive negative or zer0
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
     printf("enter the number: ");
     scanf("%d", n);
     if (n > 0)
     {
	printf("The number is positive\n");
}
else if (n == 0)
{
	 printf("The number is zero\n");
}
else 
 printf("The number  is negative");
 return (0);
 }
