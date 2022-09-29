#include "main.h"
/**
 * factorial - to find factorial of a number
 * @n: the numner
 * Return: factorial of the number
*/
int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
