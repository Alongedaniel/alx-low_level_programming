#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: variable
 * Return: Always 0
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
