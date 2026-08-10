#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key to return value of
 *
 * Return: value associated with key, or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
	{
		return (NULL);
	}
	index = hash_djb2((const unsigned char *)key) % ht->size;
	node = ht->array[index];
	if (node == NULL)
	{
		return (NULL);
	}
	while (strcmp(node->key, key) != 0 && node->next != NULL)
	{
		node = node->next;
	}
	if (strcmp(node->key, key) == 0)
	{
		return (node->value);
	}
	else
		return (NULL);
}
