#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lalph;
	char ualph;

	lalph = 'a';
	ualph = 'A';
	while (lalph <= 'z')
	{
		putchar(lalph);
		lalph++;
	}
	while (ualph <= 'Z')
	{
		putchar(ualph);
		ualph++;
	}
	putchar('\n');
	return (0);
}
