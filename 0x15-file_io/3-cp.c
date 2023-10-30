#include "main.h"
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
 *handle_error - Prints an error message to standard error and exits.
 *@exit_code: The exit code for the program.
 *@message: The error message format.
 *@arg: The argument to be included in the error message.
 */
void handle_error(int exit_code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(exit_code);
}

/**
 *main - Copies the content of one file to another.
 *@argc: The number of command-line arguments.
 *@argv: An array of strings containing the command-line arguments.
 *Return: 0 on success, appropriate exit codes on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		handle_error(97, "Usage: %s file_from file_to\n", argv[0]);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		handle_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		handle_error(99, "Error: Can't write to file %s\n", argv[2]);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			handle_error(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		handle_error(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		handle_error(100, "Error: Can't close fd\n", "");
	}
	return (0);
}
