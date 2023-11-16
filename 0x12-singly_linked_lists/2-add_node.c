#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: head node
 * @str: character duplicated
 * Return:head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	unsigned int i, count = 0;

	nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
		return (NULL);

	nnode->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	nnode->len = count;
	nnode->next = *head;
	*head = nnode;

	return (*head);
}
