#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a list_t structure
 * @str: string for list_t->str
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node;
	unsigned int str_len;
	list_t *previous_element;

	previous_element = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_str = strdup(str);
	if (new_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	str_len = 0;
	while (new_str[str_len])
	{
		str_len++;
	}
	new_node->str = new_str;
	new_node->len = str_len;
	if (previous_element == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (previous_element->next != NULL)
		{
			previous_element = previous_element->next;
		}
		previous_element->next = new_node;
		new_node->next = NULL;
	}
	return (new_node);
}
