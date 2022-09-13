#include "main.h"

/**
 * jack_bauer - check the code.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int a, b, c, d;

	for (a = '0'; a <= 2; a++)
	{
		for (b = '0'; b <= '3'; b++)
		{
			_putchar(':');
			for (c = '0'; c <= 5; c++)
			{
				for (d = '0'; d <= '9'; d++)
					_putchar(a);
				_putchar(b);
				_putchar(c);
				_putchar(d);
			}
		}
	}
}
