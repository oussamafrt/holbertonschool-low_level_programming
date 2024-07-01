#include "main.h"
#include <stdio.h>
/**
 * _strspn - Entry point.
 * @s: character to be print
 * @accept: character to be print
 * Return: Always 0;
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		int found = 0;

		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				count++;
				found = 1;
				break;
			}
		if (!found)
			break;
		i++;
	}
	return (count);
}
