#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: parameter to be checked
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else
		return (0);
}
