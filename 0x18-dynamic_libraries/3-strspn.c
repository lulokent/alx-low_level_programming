#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: function parameter
 * @accept: function parameter
 * Return: n (Success)
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int n = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
