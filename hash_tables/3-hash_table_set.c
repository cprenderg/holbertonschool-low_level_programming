#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update
 * @key: key
 * @value: value to associate with key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	int index;

	if (ht == NULL)
		return (0);
	index = (hash_djb2((const unsigned char *)key) % ht->size);
	new_node = malloc(sizeof(*new_node));
	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else if (strcmp(key, ht->array[index]->key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		free(new_node);
		return (1);
	}
	else if (strcmp(key, ht->array[index]->key) != 0)
	{
		if (ht->array[index] != NULL)
			new_node->next = ht->array[index];
		else
			new_node->next = NULL;
		ht->array[index] = new_node;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	return (1);
}
