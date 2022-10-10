#include <stdio.h>

#define NAMEOFFILE __FILE__

/**
 * main - Prints name of file
 * Return: Always 0
 */

int main(void)
{
	char fileName[] = NAMEOFFILE;

	printf("%s\n", fileName);
	return (0);
}
