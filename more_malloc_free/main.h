#define MAIN_H
#include <stdlib.h>
/**
 * malloc_checked - allocates b amount of  memory using malloc
 * @b: amount of memory to assign memory
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of s2 to concatenate
 *
 * Return: pointer to concatenated string, or NULL on fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocated memory for an array set to zero, using malloc
 * @nmemb: size of array
 * @size: size of space for each integer
 *
 * Return: pointer to allocated memory, or NULL if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size);

/**
 * array_range - creates an array of integers
 * @min: number to start at
 * @max: number to end at
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max);

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previosly allocated memory
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes for memory block
 *
 * Return: pointer to new memory allocation, or NULL is new_size is zero
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);