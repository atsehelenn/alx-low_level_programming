#include "main.h"
/**
 * _islower - to check whether a letter be a lowercase or not
 * @c: character to be checked
 * Return: 1 if correct, 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
