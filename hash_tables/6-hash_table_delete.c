#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			free_hash_node_list(ht->array[i]);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
/**
 * free_hash_node_list - frees a hash_node_t type list
 * @head: head of list
 *
 * Return: void
 */
void free_hash_node_list(hash_node_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next != NULL)
	{
		free_hash_node_list(head->next);
	}
	free(head->key);
	free(head->value);
	free(head);
}
