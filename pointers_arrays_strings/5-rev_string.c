#include "main.h"
#include <stdio.h>

/**
 * rev_string - Entry point
 * @s: charater to print
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l, i, tempo;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	for (i = 0 ; i < l / 2 ; i++)
	{
		tempo = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = tempo;
	}
}
