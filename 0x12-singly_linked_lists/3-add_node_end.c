#include "lists.h"

/**
 * add_node_end - adds a new node at the end of the list
 * @head: head node
 * @str: string
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode, *tmp;
	unsigned int i, count = 0;

	(void)tmp;

	nnode = malloc(sizeof(list_t));

	if (nnode == NULL)
		return (NULL);

	nnode->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		count++;
	nnode->len = count;
	nnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = nnode;
	}
	else
	{
		while ((tmp->next) != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nnode;
	}
	return (*head);
}
