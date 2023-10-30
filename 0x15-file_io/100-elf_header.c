#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void checkElf(unsigned char *magicBytes);
void printElfMagic(unsigned char *magicBytes);
void printElfClass(unsigned char *magicBytes);
void printElfData(unsigned char *magicBytes);
void printElfVersion(unsigned char *magicBytes);
void printElfOSABI(unsigned char *magicBytes);
void printElfABI(unsigned char *magicBytes);
void printElfType(unsigned int fileType, unsigned char *magicBytes);
void printElfEntryPoint(unsigned long int entryPoint, unsigned char *magicBytes);
void closeElf(int fileDescriptor);

/**
 *checkElf - Checks if a file is an ELF file.
 *@magicBytes: A pointer to an array containing the ELF magic numbers.
 */
void checkElf(unsigned char *magicBytes)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (magicBytes[index] != 127 &&
			magicBytes[index] != 'E' &&
			magicBytes[index] != 'L' &&
			magicBytes[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 *printElfMagic - Prints the magic numbers of an ELF header.
 *@magicBytes: A pointer to an array containing the ELF magic numbers.
 *
 *Description: Magic numbers are separated by spaces.
 */
void printElfMagic(unsigned char *magicBytes)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", magicBytes[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 *main - Displays the information contained in the
 *       ELF header at the start of an ELF file.
 *@argc: The number of arguments supplied to the program.
 *@argv: An array of pointers to the arguments.
 *
 *Return: 0 on succes
 */
int main(int __attribute__((__unused__)) argCount, char *arguments[])
{
	Elf64_Ehdr * elfHeader;
	int fileDescriptor, bytesRead;

	fileDescriptor = open(arguments[1], O_RDONLY);
	if (fileDescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", arguments[1]);
		exit(98);
	}

	elfHeader = malloc(sizeof(Elf64_Ehdr));
	if (elfHeader == NULL)
	{
		closeElf(fileDescriptor);
		dprintf(STDERR_FILENO, "Error: Memory allocation failure\n");
		exit(98);
	}

	bytesRead = read(fileDescriptor, elfHeader, sizeof(Elf64_Ehdr));
	if (bytesRead == -1)
	{
		free(elfHeader);
		closeElf(fileDescriptor);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", arguments[1]);
		exit(98);
	}

	checkElf(elfHeader->e_ident);
	printf("ELF Header:\n");
	printElfMagic(elfHeader->e_ident);
	printElfClass(elfHeader->e_ident);
	printElfData(elfHeader->e_ident);
	printElfVersion(elfHeader->e_ident);
	printElfOSABI(elfHeader->e_ident);
	printElfABI(elfHeader->e_ident);
	printElfType(elfHeader->e_type, elfHeader->e_ident);
	printElfEntryPoint(elfHeader->e_entry, elfHeader->e_ident);

	free(elfHeader);
	closeElf(fileDescriptor);
	return (0);
}

/**
 *closeElf - Closes an ELF file.
 *@fileDescriptor: The file descriptor of the ELF file.
 *
 *Description: If the file cannot be closed - exit code 98.
 */
void closeElf(int fileDescriptor)
{
	if (close(fileDescriptor) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close file descriptor %d\n", fileDescriptor);
		exit(98);
	}
}
