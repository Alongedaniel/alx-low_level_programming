#include "main.h"

/**
 * print_square - check the code.
 * @size: declared variable.
 * Return: Always 0.
 */

void print_square(int size)
{
	int size;
	int col;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col <= size - 1; col++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
