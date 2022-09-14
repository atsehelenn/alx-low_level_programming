#include "main.h"
/**
 * _islower - to check whether a letter be a lowercase or not
 * Return: 1 if correct
 * Return: 0 otherwise
*/
int _islower(int c)
{
	if (c >= 'a' && c <='z')
		return (1);
	else 
		return (0);
}
