#include "main.h"

/**
 * _pow_recursion - check the code
 * @x: variable
 * @y: variable
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0 || x == 1 || y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
