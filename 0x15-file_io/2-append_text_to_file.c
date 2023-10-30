#include "main.h"

/**
 *append_text_to_file - Appends text at the end of a file.
 *@filename: The name of the file.
 *@text_content: The NULL-terminated string to add at the end of the file.
 *Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes, write_status, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	for (len = 0; text_content[len];)
	{
		len++;
	}

	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes == -1)
	{
		return (-1);
	}

	write_status = write(fdes, text_content, len);
	if (write_status == -1)
	{
		close(fdes);
		return (-1);
	}

	close(fdes);
	return (1);
}
