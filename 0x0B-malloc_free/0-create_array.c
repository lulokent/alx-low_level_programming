#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of an array
 * @c: char to be assigned
 * Return: pointer to array ,or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
