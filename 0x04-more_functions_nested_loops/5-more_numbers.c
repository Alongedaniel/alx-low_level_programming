#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		int b;

		b = '0';

		while (b <= 14)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
