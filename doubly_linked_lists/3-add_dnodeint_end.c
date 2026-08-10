#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the of a dlistint_t list
 * @head: pointer to the head of the dlistint_t list
 * @n: integer to add to new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	current = *head;
	if (*head != NULL)
	{
		while ((current)->next != NULL)
		{
			current = (current)->next;
		}
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = current;
	if (current != NULL)
	{
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
