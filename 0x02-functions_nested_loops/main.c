#include <stdio.h>

void print_alphabet(void)
{
	char alph = 'a';

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		printf("%c", alph);
	}
	putchar('\n');
}
