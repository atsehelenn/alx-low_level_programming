#include "main.h"
/**
 * swap_int - swap two numbers
 * @a: first number
 * @b: second number
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
