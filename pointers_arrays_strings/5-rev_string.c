#include "main.h"
/**
 * rev_string - check the code
 * @s: variable to be verified
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l, start, end, tempo;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	end = l - 1;
	start = 0;

	while (start < end)
	{
		tempo = s[start];
		s[start] = s[end];
		s[end] = tempo;

		start++;
		end--;
	}
}
