#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
/**
 * get_op_func - gets the correct function for the calculator
 * @s: character of function
 *
 * Return: pointer to function that corresponds to operator
 */
int (*get_op_func(char *s))(int, int);
/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b);
/**
 * op_sub - returns the difference of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: difference of a and b
 */
int op_sub(int a, int b);
/**
 * op_mul - returns the product of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: product of a and b
 */
int op_mul(int a, int b);
/**
 * op_div - returns the result of the division of a by b
 * @a: numerator
 * @b: denominator
 *
 * Return: result of a divided by b
 */
int op_div(int a, int b);
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: numerator
 * @b: denominator
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b);

#endif
