#include "main.h"

/**
 *create_file - Creates a file with specified permissions and writes content to it.
 *@filename: The name of the file to be created.
 *@text_content: The NULL-terminated string to write to the file.
 *Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fdes, write_status;

	if (filename == NULL)
	{
		return (-1);
	}

	fdes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdes == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write_status = write(fdes, text_content, strlen(text_content));
		if (write_status == -1)
		{
			close(fdes);
			return (-1);
		}
	}

	close(fdes);
	return (1);
}
