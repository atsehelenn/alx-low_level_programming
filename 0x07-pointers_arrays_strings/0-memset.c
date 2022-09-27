#include "main.h"
/**
 * _memset - fills the 1st n bytes of the memory area pointed to by s with the
 *          constant byte b
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory area @s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;
	unsigned char *memory = s, value = b;

	for (j = 0; j < n; j++)
		memory[j] = value;
	return (memory);
}

