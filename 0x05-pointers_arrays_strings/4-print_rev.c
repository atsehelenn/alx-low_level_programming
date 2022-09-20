#include "main.h"
/**
 * print_rev - reverse a string
 * @s: string to be reversed
 * Return: void
*/
void print_rev(char *s)
{
	int a, b, c;
	char *d, ted;

	d = s;
	while (s[c] != '\0')
	{
		c++;
	}
	for (b = 1; b < c; b++)
	{
		d++;
	}
	for (a = 0; a < (c / 2); a++)
	{
		ted = s[a];
		s[a] = *d;
		*d = ted;
		d--;
	}
}

