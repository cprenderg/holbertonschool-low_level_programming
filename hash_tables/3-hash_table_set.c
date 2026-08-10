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
	char *str;
	hash_node_t *new_node;
	int strlen;
	int i;
	int index;

	i = 0;
	strlen = 0;
	while (value[strlen] != '\0')
	{
		strlen++;
	}
	str = malloc(sizeof(char) * strlen);
	if (str == NULL)
		return (0);
	while (i <= strlen)
	{
		str[i] = value[i];
		i++;
	}
	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		free(str);
		return (0);
	}
	index = (hash_djb2((const unsigned char *)key) % ht->size);
	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
	}
	else
	{
		new_node->next = NULL;
	}
	ht->array[index] = new_node;
	new_node->key = (char *)key;
	new_node->value = str;
	return (1);
}
