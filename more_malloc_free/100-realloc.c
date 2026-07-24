#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previosly allocated memory
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes for memory block
 *
 * Return: pointer to new memory allocation, or NULL is new_size is zero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *new_ptr;
	char *new;
	char *old;

	old = ptr;
	i = 0;
	if (new_size == old_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		new = new_ptr;
		return (new_ptr);
	}
	else if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		new = new_ptr;
		while (i < old_size)
		{
			new[i] = old[i];
			i++;
		}
		free(ptr);
		return (new_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size < old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		new = new_ptr;
		while (i < new_size)
		{
			new[i] = old[i];
			i++;
		}
		free(ptr);
		return (new_ptr);
	}
	else
	{
		return (NULL);
	}
}
