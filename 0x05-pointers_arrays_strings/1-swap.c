#include "main.h"

/**
 * swap_int - check the code
 * @a: pointer variable.
 * @b: pointer variable.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
