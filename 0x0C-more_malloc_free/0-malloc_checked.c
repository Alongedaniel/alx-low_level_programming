#include "main.h"

/**
 * malloc_checked - check the code
 * @b: Variabe declared
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (98);
	}
}
