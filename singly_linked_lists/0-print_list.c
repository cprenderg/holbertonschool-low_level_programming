#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t list to print
 *
 * Return: amount of linked lists printed
 */
size_t print_list(const list_t *h)
{
	const list_t *current_list;
	unsigned long int elements;

	current_list = h;
	elements = 0;
	while (current_list != NULL)
	{
		if (current_list->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current_list->len, current_list->str);
		}
		current_list = current_list->next;
		elements++;
	}
	return (elements);
}
