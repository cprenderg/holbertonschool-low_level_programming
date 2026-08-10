#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of list
 * @idx: index of where to insert new node
 * @n: integer to add to new node
 *
 * Return: address of new node, or NULL on fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;
	unsigned int i;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
		return (new_node);
	current_node = malloc(sizeof(*current_node));
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	current_node = *h;
	i = 0;
	while (i < idx && current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	if (i != idx)
		return (NULL);

	if (current_node->prev != NULL)
	{
		new_node->prev = current_node->prev;
		current_node->prev->next = new_node;
	}
	new_node->next = current_node;
	current_node->prev = new_node;
	return (new_node);
}
