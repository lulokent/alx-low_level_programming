#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory
 * @b: the size of the allocated memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	else
	return (p);
}
