#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: string to be modified
 * Return: void
*/
void rev_string(char *s)
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
