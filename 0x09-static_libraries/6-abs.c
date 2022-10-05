#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @n: number
 * Return: Always 0
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return ((-1) * (n));
}
