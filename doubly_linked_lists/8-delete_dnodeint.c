#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index index of a dlistint_t list
 * @head: head of list
 * @index: index of node to delete
 *
 * Return: 1 on succes, -1 if fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	i = 0;
	current = *head;
	while (i < index && current != NULL)
	{
		current = current->next;
		i++;
	}
	if (i != index)
		return (-1);
	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);

	}
	if (current->next != NULL)
		current->next->prev = current->prev;
	current->prev->next = current->next;
	free(current);
	return (1);
}
