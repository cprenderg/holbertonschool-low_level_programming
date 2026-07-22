#include "main.h"
/**
 * _calloc - allocated memory for an array set to zero, using malloc
 * @nmemb: size of array
 * @size: size of space for each integer
 *
 * Return: pointer to allocated memory, or NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new_arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	new_arr = (malloc(nmemb * size));
	if (new_arr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		new_arr[i] = 0;
		i++;
	}
	return (new_arr);
}
