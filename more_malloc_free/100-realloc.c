#include "main.h"
void copy_memory(char *dest, char *src, unsigned int size);
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
	void *new_ptr;
	char *old;

	old = ptr;
	if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		if (new_size > old_size)
			copy_memory(new_ptr, old, old_size);
		if (new_size < old_size)
			copy_memory(new_ptr, old, new_size);
		free(ptr);
		return (new_ptr);
	}
}
/**
 * copy_memory - copies one array to another
 * @dest: new array
 * @src: source array
 * @size: size of new array
 *
 * Return: void
 */
void copy_memory(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
}
