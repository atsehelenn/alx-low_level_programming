#include <stdio.h>
/**
 * main - printitng alphabetts in lowercase except e and q
 * Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter == 'e' && letter == 'q')
		{
			continue;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
