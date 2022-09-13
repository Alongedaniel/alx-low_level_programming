#include "main.h"

/**
 * jack_bauer - check the code.
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int a, b, c, d;

	while (a <= 23)
	{
		while (b <= 59)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b += 1;
		}
		a += 1;
	}
}
