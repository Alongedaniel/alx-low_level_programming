#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: name of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int add;

	for (i = 1; i < argc; i++)
		if (atoi(argv[i]) == 'a')
		{
			printf("0\n");
		}
		else if (!(atoi(argv[i]) >= 0))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += atoi(argv[i]);
		}
	printf("%d\n", add);
	return (0);
}
