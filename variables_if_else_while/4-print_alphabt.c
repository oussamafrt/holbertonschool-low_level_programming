#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101)
			continue;
		if (i == 113)
			continue;
		else
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
