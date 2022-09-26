#include "main.h"

/**
 * _memcpy - prints buffer in hexa
 * @src: the address of memory to print
 * @dest: address is copied to
 * @n: variable
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
