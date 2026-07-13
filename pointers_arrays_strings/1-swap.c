#include "main.h"
/**
 * swap_int - swaps the value of two variables
 * @a: first variable
 * @b: second variable
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp_a = *a;
	*a = *b;
	*b = temp_a;
}
