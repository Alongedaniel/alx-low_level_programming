#include "main.h"

/**
 * power - check the code
 * @x: variable
 * @y: variable
 * Return: Always 0.
 */

int power(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	return (power(x, y + 1));
}


/**
 * _sqrt_recursion - check the code
 * @n: variable
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	return (power(n, 1));
}
