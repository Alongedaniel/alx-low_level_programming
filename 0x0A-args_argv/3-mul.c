#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int i;
		int mul = 1;

		for (i = 1; i < argc; ++i)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
