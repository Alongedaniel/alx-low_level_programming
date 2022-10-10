#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: description of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif


#ifndef MAIN_H
#define MAIN_H

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
