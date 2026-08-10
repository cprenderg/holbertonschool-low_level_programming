#include "lists.h"
/**
 * dlistint_len - prints all elements of a dlistint_t list
 * @h: dlistint_t list to print
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
