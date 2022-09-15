#include "main.h"

/**
 * _isupper - check whether a character is uppercase or not
 * @c: the character
 * Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
