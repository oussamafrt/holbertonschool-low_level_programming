#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Entry point
 * @n: Number of intergers passed to the function
 * @separator : string to be printed
 * Description : This function prints a variable number of intergers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, num;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		num = va_arg(args, unsigned int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
