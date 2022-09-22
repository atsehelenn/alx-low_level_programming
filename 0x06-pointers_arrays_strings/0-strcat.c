#include "main.h"
/**
 * _strcat - concatenate two strings
 * @dest : pointer 1
 * @src : pointer 2
 * Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
		dest[x + y] = src[y];
	return (dest);
}
