#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of dlistint_t list
 * @index: index of node to return
 *
 * Return: nth node of list, or NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = malloc(sizeof(*node));
	if (node == NULL)
	{
		return (NULL);
	}
	else if (head == NULL)
	{
		return (NULL);
	}
	i = 0;
	node = head;
	while (i < index && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (i != index)
	{
		return (NULL);
	}
	else
	{
		return (node);
	}
}
