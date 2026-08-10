#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of dlistint_t list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		{
			return;
		}

	if (head->next != NULL)
	{
		free_dlistint(head->next);
	}
	free(head);
}
