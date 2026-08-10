#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of array
 *
 * Return: pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int i;

	new_hash = malloc(sizeof(*new_hash));
	if (new_hash == NULL)
		return (NULL);
	new_hash->array = malloc(sizeof(*(new_hash->array)) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	new_hash->size = size;
	i = 0;
	while (i < size)
	{
		new_hash->array[i] = NULL;
		i++;
	}
	return (new_hash);
}
