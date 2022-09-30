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
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
