#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * keygen - Function
 * @username: pointer
 * Return: return
 */
int keygen(char *username)
{
	int key = 0;
	int len = strlen(username);

	for (int i = 0; i < len; i++)
		key += username[i];
	key = key % 1000;

	return (key);
}

/**
 * main - Function
 * @argc: pointer
 * @argv: array pointer
 * Return: return
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage: ./keygen5 username\n");
		return (1);
	}

	char *username = argv[1];

	int key = keygen(username);

	printf("Key for username '%s': %d\n", username, key);

	return (0);
}
