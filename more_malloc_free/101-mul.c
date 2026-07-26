#include "main.h"
#include <stdio.h>
int is_num(char *a);
int to_num(char *str);
int _strlen(char *str);
void to_str(int *src, char *dest, unsigned int len);
void long_mul(char *num1, char *num2, unsigned int len1,
		unsigned int len2, int *dest);
void *_calloc(unsigned int nmemb, unsigned int size);
/**
 * main - prints the product of two positive numbers
 * @argc: number of arguments
 * @argv: arguments passed in
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	int *int_array;
	char *ans_array;
	unsigned int len1;
	unsigned int len2;
	unsigned int arr_len;

	if (argc == 3)
	{
		if (!(is_num(argv[1])) || !(is_num(argv[2])))
		{
			printf("Error\n");
			exit(98);
		}
		len1 = _strlen(argv[1]);
		len2 = _strlen(argv[2]);
		arr_len = len1 + len2;
		int_array = _calloc((arr_len + 1), sizeof(int));
		if (int_array == NULL)
		{
			free(int_array);
			printf("Error\n");
			exit(98);
		}
		long_mul(argv[1], argv[2], len1, len2, int_array);
		ans_array = _calloc((arr_len + 1), (arr_len + 1));
		if (ans_array == NULL)
		{
			free(ans_array);
			printf("Error\n");
			exit(98);
		}
		to_str(int_array, ans_array, arr_len);
		free(int_array);
		{
			printf("%s\n", ans_array);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
}
/**
 * is_num - checks if a character is a number
 * @a: character to check
 *
 * Return: 1 if true, 0 if false
 */
int is_num(char *a)
{
	int i;

	i = 0;
	while (a[i] >= 48 && a[i] <= 57)
	{
		i++;
	}
	if (a[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _strlen - counts the number of chars in a string
 * @str: string to be counted
 *
 * Return: number of chars in str
 */
int _strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
/**
 * long_mul - multiplies two strings of numbers together
 * @num1: first number
 * @num2: second number
 * @len1: length of first number
 * @len2: length of second number
 * @dest: product of num1 and num2
 *
 * Return: void
 */
void long_mul(char *num1, char *num2,
		unsigned int len1, unsigned int len2, int *dest)
{
	int i;
	int j;
	int ones;
	int tens;
	int mul;
	int sum;

	i = len1 - 1;
	while (i >= 0)
	{
		j = len2 - 1;
		while (j >= 0)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			tens = i + j;
			ones = i + j + 1;
			sum = mul + dest[ones];
			dest[ones] = sum % 10;
			dest[tens] += sum / 10;
			j--;
		}
		i--;
	}
}
/**
 * to_str - converts an array of integers to a string
 * @src: integer array
 * @dest: destination for string array
 * @len: length of array
 *
 * Return: void
 */
void to_str(int *src, char *dest, unsigned int len)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	while (i < len && src[i] == 0)
	{
		i++;
	}
	if (i == len)
	{
		dest[0] = '0';
		dest[1] = '\0';
	}
	else
	{
		while (i < len)
		{
			dest[j] = src[i] + '0';
			i++;
			j++;
		}
		dest[j] = '\0';
	}
}
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
	while (i < nmemb * size)
	{
		new_arr[i] = 0;
		i++;
	}
	return (new_arr);
}
