#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest : pointer
 * @src : pointer
 * @n : variable integer
 * Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x + y] = src[y];
	return (dest);
}
