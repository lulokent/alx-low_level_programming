#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - add two integers
 * @a: first parameter
 * @b: second parameter
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integer from each other
 * @a: first parameter
 * @b: second parameter
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of integeres
 * @a: first parameter
 * @b: second parameter
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides integers into each other
 * @a: first parameter
 * @b: second parameter
 * Return: the results of the division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of integers
 * @a: first parameter
 * @b: second parameter
 * Return: the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
