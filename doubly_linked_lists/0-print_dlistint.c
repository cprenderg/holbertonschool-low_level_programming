#include "lists.h"
/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: dlistint_t list to print
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
