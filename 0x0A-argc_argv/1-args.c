#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the number of arguments.
 * @argc: number of arguments passed
 * @argv: name of arguments passed
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%d\n", i);
	return (0);
}
