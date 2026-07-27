#include "3-calc.h"
/**
 * get_op_func - gets the correct function for the calculator
 * @s: character of function
 *
 * Return: pointer to function that corresponds to operator
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
        	{"+", op_add},
        	{"-", op_sub},
        	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
	};
	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
