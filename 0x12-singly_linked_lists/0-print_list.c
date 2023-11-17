#include "lists.h"

/**
 * _strlen - retutns the length of a string
 * @s: the string whose length is to be checked
 * Return: integer length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (*s)
		i++;
	return (i);
}

/**
 * print_list - prints all the elements of a list_t
 * @h:head node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t element;

	element = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		printf("[%d]%s\n", 0, "(nil)");
		else
		printf("[%d]%s\n", _strlen(h->str), h->str);
		h = h->next;
		element++;
	}
	return (element);
}
