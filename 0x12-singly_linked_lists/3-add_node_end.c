#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: head node
 * @str: string
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || nnode)
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
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = nnode;
	}
	else
	*head = nnode;
	return (nnode);
}
