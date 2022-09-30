#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	unsigned int i, x, y;

	x = 0;

	if (argc < 3)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (argc-- && argc > 0)
	{
		for (i = 0; argv[argc][i] != '\0'; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		y = atoi(argv[argc]);
		x += y;
	}
	printf("%d\n", x);

	return (x);
}
