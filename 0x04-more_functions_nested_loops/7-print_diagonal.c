#include "main.h"

/**
 * print_diagonal - check the code.
 * @n: variable declared.
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int n;
	int row;
	int space;

	if (num <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= num - 1; row++)
		{
			for (space = 0; space <= row - 1; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
