#include "main.h"

/**
 * print_last_digit - check the code.
 * @x: print number
 * Return: Always 0.
 */

int print_last_digit(int x)
{
	x %= 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');
	return (x);
}
