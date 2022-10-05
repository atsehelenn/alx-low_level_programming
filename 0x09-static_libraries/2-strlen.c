#include "main.h"
/**
 * _strlen - a function that returns the length of a string.
 * @s: the string
 * Return: void
*/
int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
		count++;
	return (count);
}
