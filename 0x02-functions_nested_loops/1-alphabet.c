#include "main.h"
/**
 * print_alphabet - to print alphabets in lowercase
 * Return: void
*/
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter >= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
