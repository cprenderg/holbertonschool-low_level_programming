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
