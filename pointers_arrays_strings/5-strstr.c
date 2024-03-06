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

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; needle[j] != '\0' ; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				j++;

				if (needle[j] == '\0')
					return (&haystack[i]);
			}
		}
	}
	return ('\0');
}
