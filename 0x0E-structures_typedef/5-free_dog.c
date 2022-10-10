#include "dog.h"

/**
 * free_dog - free dog
 * @d: variable
 * Return: Always 0
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
