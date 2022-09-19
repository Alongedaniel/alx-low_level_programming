/**
 * _strlen - check the code
 * @s: pointer variable.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}
