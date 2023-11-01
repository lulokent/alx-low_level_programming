#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: assign char
 * Return: 0 (success)
 */
char *_strdup(char *str)
{
	char *s;
	int a = 0, i = 1;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		s[a] = str[a];
	return (s);
}

