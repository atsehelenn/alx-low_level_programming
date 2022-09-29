#include "main.h"
/**
 * _pow_recursion -  a function that returns the value of x power of y
 * @x: base number
 * @y: the power
 * Return: power
*/
int _pow_recursion(int x, int y)
{
	int power;

	power = x;
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		power = power * _pow_recursion(x, y - 1);
		return (power);
	}
}
