#include "main.h"
/**
 * _strlen - check the code
 * @s: variable to be verified
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = '\0';

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
