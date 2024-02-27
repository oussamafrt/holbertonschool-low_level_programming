#include "main.h"

/**
 * strlen - Entry point
 * @s: character to print
 * @a: character to be print
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int a;

	a = '\0';
		while (s[a] != '\0')
		{
			a++;
		}
		return (a);
}
