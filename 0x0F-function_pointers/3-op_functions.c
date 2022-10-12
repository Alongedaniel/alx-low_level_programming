#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Sum of numbers
 * @a: variable
 * @b: variable
 * Return: Always 0
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtrsction of numbers
 * @a: variable
 * @b: variable
 * Return: Always 0
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of numbers
 * @a: variable
 * @b: variable
 * Return: Always 0
 */

int op_mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}

/**
 * op_div - division of numbers
 * @a: variable
 * @b: variable
 * Return: Always 0
 */

int op_div(int a, int b)
{
	int res;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		res = a / b;
		return (res);
	}
}

/**
 * op_mod - remainder of numbers
 * @a: variable
 * @b: variable
 * Return: Always 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
		return (a % b);
}
