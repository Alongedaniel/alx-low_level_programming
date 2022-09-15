#include "main.h"

/**
 * print_diagonal - Print a diagonal to the terminal
 * @n: the number of \ characters to be printed to form the diagonal
 * Return: void
 */
void print_diagonal(int n)
{
	int a;
	int b;

	a = 0;
	while (a < n && n > 0)
	{
		b = 0;
		while (b < i)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
