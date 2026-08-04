#include "lists.h"
/**
 * list_len - returns number of elements in a linked list_t list
 * @h: pointer to head of linked list
 *
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	const list_t *current_list;
	unsigned long int elements;

	current_list = h;
	elements = 0;
	while (current_list != NULL)
	{
		current_list = current_list->next;
		elements++;
	}
	return (elements);
}
