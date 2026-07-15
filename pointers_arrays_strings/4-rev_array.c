#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to be reversed
 * @n: the size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int temp_num = 0;
	int i = 0;

	n--;
	while (n > i)
	{
		temp_num = a[i];
		a[i] = a[n];
		a[n] = temp_num;
		n--;
		i++;
	}
}
