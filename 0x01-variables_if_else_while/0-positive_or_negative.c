#include <stdio.h>
int main(void)
{
/*declaration of variable*/
int n;
     printf("enter the number: ");
     scanf("%d", n);
     if (n>0)
     {
	printf("The number is positive\n");
}
else if (n==0)
{
	 printf("The number is zero\n");
}
else 
 printf("The number is negative");
 return 0;
 }
