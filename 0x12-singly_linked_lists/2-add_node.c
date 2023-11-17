#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: head node
 * @str: character duplicated
 * Return:head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode = malloc(sizeof(list_t));

	if (!head || !nnode)
		return (NULL);
	if (str)
	{
		nnode->str = strdup(str);

		if (!nnode->str)
		{
			free(nnode);
			return (NULL);
		}
		nnode->len = _strlen(nnode->str);
	}
	nnode->next = *head;
	*head = nnode;
	return (nnode);
}
