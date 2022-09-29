#include "main.h"
#include <string.h>
/**
 * int _strlen_recursion -  returns the length of a string.
 * @s: the string
 * Return: length of the string
*/
int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	else
	{
		len = 1 + _strlen_recursion(s + 1);
		return (len);
	}
}
