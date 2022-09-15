#include "main.h"

/**
 * print_square - Print a square of single characters
 * @size : the number n x n of the square
 * Constraints -  use _putchar to print and use
 * Return: void
 */
void print_square(int size)
{
	int a;
	int b;

	a = 0;

	while (a < size && size > 0)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
