#include "variadic_functions.h"

/**
 * sum_them_all - Prints the sum of numbers
 * @n: number of args
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
		va_end(ap);
	}
	return (sum);
}
