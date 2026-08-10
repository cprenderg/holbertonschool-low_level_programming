#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int first;

	printf("{");
	if (ht != NULL)
	{
		i = 0;
		first = 0;
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				node = ht->array[i];
				while (node != NULL)
				{
					if (i != 0 && first != 0)
					{
						printf(", ");
					}
					printf("%s: ", node->key);
					printf("%s", node->value);
					node = node->next;
					first = 1;
				}
			}
			i++;
		}
	}
	printf("}\n");
}