#include "main.h"
/**
 * *_strchr - a function that locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return: If c is found - a pointer to the first occurence.if not null
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}

