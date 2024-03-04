#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry point
 * @haystack: character to print
 * @needle: character to print
 *
 * Return: Nothing.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (&s[i] == &accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
