#include "main.h"

/**
 * _memset - prints address of b
 * @s: the address of memory to print
 * @n: the size of the memory to print
 * @b: the memory
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
