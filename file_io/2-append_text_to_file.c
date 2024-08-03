#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int status = 1;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL || *text_content == '\0')
		return (-1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	if (fputs(text_content, file) == EOF)
		status = -1;

	fclose(file);
	return (status);
}
