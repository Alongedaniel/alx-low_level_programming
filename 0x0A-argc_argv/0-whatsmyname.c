#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints name of program.
 * @argc: amount of argument passed to the program
 * @argv: name of arguments passed to the program
 * Return: return value 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
