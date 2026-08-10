#include "lists.h"
/**
 * sum_dlistint - sum of all data (n) of a dlistint_t linked list
 * @head: head of dlistint_t list
 *
 * Return: sum of all data (n) in list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *next_node;

	if (head->next == NULL)
	{
		return (0);
	}
	else
	{
		next_node = malloc(sizeof(*next_node));
		if (next_node == NULL)
		{
			return (0);
		}
		next_node = head;
		sum = 0;
		while (next_node->next != NULL)
		{
			sum += next_node->n;
			next_node = next_node->next;
		}
		sum += next_node->n;
	}
	return (sum);
}
