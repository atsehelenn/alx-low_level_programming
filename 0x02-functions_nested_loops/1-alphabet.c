#include <stdio.h>
/**
 * print_alphabet - to print alphabets in lowercase
 * Return: void
*/
void print_alphabet(void);
{
	char letter;

	letter = 'a';
	while (letter >= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
