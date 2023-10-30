#include "main.h"
/**
 *main - program that copies the content of a file to another file
 *@argc: The number of command-line arguments
 *@argv: string argument
 *Return: 0
 */
int main(int argc, char *argv[])
{
	char buffer[1024];
	int bytes_read, input_file, output_file, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	input_file = open(argv[1], O_RDONLY);
	if (input_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	output_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (output_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(input_file);
		exit(99);
	}
	while ((bytes_read = read(input_file, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(output_file, buffer, bytes_read);
		if (bytes_written < bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close(input_file);
	close(output_file);
	return (0);
}