#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog
 * @d: variable
 * Return: Always 0
 */

void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
