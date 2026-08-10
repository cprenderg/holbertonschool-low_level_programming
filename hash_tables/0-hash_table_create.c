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

	new_hash = malloc(sizeof(*new_hash));
	if (new_hash == NULL)
		return (NULL);
	new_hash->array = malloc(sizeof(long int) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	return (new_hash);
}
