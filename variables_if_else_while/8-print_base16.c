#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
	}
	for (i = 97; i <= 102; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
