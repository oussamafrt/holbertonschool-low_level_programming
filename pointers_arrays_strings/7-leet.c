#include "main.h"

/**
 * leet - Entry point
 * @str: Character to be print
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int i, j;
	char original[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; original[j] != '\0'; j++)
		{
			if (str[i] == original[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}
