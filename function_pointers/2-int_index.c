#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of array
 * @cmp: function used to compare value
 *
 * Return: index of the first occurance, or -1 if no matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array == NULL || cmp == NULL)
	{
		return (NULL);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
