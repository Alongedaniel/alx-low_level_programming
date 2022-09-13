#include "main.h"

/**
 * _abs - check the code.
 * @x: Check the code.
 * Return: Always 0.
 */

int _abs(int x)
{
	if (x < 0)
	{
		x = x * (-1);
		return (x);
	}
	else
		return (x);
}
