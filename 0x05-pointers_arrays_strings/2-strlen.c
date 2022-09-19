
/**
 * _strlen - check the code
 * @s: pointer variable.
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len;
	
	while (*s != '\0')
	{
		len++;
	}
	s++;
	return (len);
}
