#include <main.h>

/**
 * print_alphabet - Prints Alphabets.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
}
