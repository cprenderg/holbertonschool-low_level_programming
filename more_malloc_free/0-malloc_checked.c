#include "main.h"
/**
 * malloc_checked - allocates b amount of  memory using malloc
 * @b: amount of memory to assign memory
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit (98);
	else
		return (ptr);
}
