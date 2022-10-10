#include "dog.h"
#include <stdio.h>

/**
 * print_dog - check the code
 * @d: variable
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else if (d->name == NULL || d->owner == NULL)
		printf("nil");
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}