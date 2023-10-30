#include "main.h"

/**
 *create_file - Creates a file with specified permissions
 *@filename: The name of the file to be created.
 *@text_content: The NULL-terminated string to write to the file.
 *Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fdes, write_status, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	fdes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_status = write(fdes, text_content, len);

	if (fdes == -1 || write_status == -1)
	{
		return (-1);
	}

	close(fdes);
	return (1);
}
