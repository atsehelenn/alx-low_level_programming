#include "main.h"
/**
 * print_line - Draws a diagonal line using the \ character
 * @n: The number of _ characters to be printed.
 * Return: void
*/
void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{
		for (space = 0; space < len; space++)
		{
			_putchar(' ');
		_putchar('\\');

		if (len == n - 1)
			continue;

		_putchar('\n');
		}
	}
	_putchar('\n');
}
