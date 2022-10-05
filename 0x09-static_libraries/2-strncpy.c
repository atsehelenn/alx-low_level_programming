#include "main.h"
/**
 * _strncpy - copying two strings
 * @dest : pointer
 * @src : source pointer
 * @n : integer variable
 * Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; x < n && src[x] != '\0'; x++)
		;
	for (y = 0; y < x && src[y] != '\0'; y++)
		dest[y] = src[y];
	for (y = 0; y < n; y++)
		dest[y] = '\0';
	return (dest);
}
