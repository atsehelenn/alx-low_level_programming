
#include <stdio.h>
/**
 * main - to print the word _putchar
 * Return: Always 0 (Success)
*/
int main(void)
{
	char *a = "_putchar";

	while (*a)
	{
		_putchar(*a);
		*a++;
	}
	_putchar('\n');
	return (0);
}
