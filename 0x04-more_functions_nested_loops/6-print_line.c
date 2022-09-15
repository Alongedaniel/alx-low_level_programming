#include "main.h"

/**
 * print_line - check the code.
 * @n: variable declared.
 * Return: Always 0.
 */

void print_line(int n)
{
	int n;
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (col = 0; col <= n - 1; col++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
