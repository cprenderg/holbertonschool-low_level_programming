#define MAIN_H
#include <stdlib.h>
/**
 * create_array - creates a array of chars, initialised with c
 * @size: size of the array
 * @c: char to fill array with
 *
 * Return: pointer to created array, or NULL if size = 0 or if it fails
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - returns pointer to newly allocated space containing a copy of str
 * @str: string to copy
 *
 * Return: pointer to copied string, or NULL if str = NULL
 */
char *_strdup(char *str);

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - return a pointer to a 2D array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: Grid of width and height, or NULL if width or height is 0
 */
int **alloc_grid(int width, int height);
/**
 * free_grid - frees a 2D grid
 * @grid: grid to be freed
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height);