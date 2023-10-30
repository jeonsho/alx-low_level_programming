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
	if (input_file == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	output_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (output_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((bytes_read = read(input_file, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(output_file, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	if (close(input_file) < 0)
	{
	  dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_file);
	  exit(100); }
	if (close(output_file) < 0)
	{
	  dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", output_file);
	  exit(100); }
	return (0);
}
