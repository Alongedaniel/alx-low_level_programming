#include "main.h"

/**
 * print_triangle - print a triangle to the terminal
 * @size : the height of the triangle to be shown
 * Retutn: void
 */
void print_triangle(int size)
{
	int a = 1;
	int b;

	while (a <= size && size > 0)
	{
		b = 0;
		while (b < size - i)
		{
			_putchar(' ');
			b++;
		}
		b = 0;
		while (b < a)
		{
			_putchar('#');
			b++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 1)
		_putchar('\n');
}
