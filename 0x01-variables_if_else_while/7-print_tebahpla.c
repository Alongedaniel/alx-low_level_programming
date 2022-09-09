#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char revalph;

	revalph = 'z';
	while (revalph >= 'a')
	{
		putchar(revalph);
		revalph--;
	}
	putchar('\n');
	return (0);
}
