#include <stdio.h>
/** function - to print alphabets in lowercase
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
	return (void);
}
