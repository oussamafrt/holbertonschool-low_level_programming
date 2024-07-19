#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead)
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	char *mot;
	int format_objet;
	va_list args;

	va_start(args, format);
	while (format && format[index] != '\0')
	{
		format_objet = 1;
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				mot = va_arg(args, char *);
				if (mot == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", mot);
				break;
			default:
				format_objet = 0;
				break;
		}
		if (format[index + 1] && format_objet)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(args);
}
