#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a list_t structure
 * @str: string for list_t->str
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str;
	list_t *new_node;
	unsigned int str_len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_str = strdup(str);
	if (new_str == NULL)
	{
		return (NULL);
	}
	str_len = 0;
	while (new_str[str_len])
	{
		str_len++;
	}
	new_node->str = new_str;
	new_node->len = str_len;
	/* Setting address of next element to pointer given */
	new_node->next = *head;
	/* Setting new node as the head of the list */
	*head = new_node;
	return (new_node);
}
