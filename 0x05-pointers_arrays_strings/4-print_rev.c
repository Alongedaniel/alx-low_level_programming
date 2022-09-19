#include "main.h"

/**
 * print_rev - check the code.
 * @s: Pointer declared.
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
