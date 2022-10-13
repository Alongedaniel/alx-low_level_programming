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
	int sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		sum += va_arg(ap, int);
		va_end(ap);
	}
	return (sum);
}
