#include "main.h"
/**
 * create_array - creates a array of chars, initialised with c
 * @size: size of the array
 * @c: char to fill array with
 *
 * Return: pointer to created array, or NULL if size = 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
