#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0
*/
int main(void)
{
	char r;

	r = 'A';
	printf("%c: %d\n", r, _isupper(r));
	r = 'a';
	printf("%c: %d\n", r, _isupper(r));
	return (0);
}
