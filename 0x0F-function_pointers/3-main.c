#include "3-calc.h"
#include <stdio.h>

/**
 * main - a basic calculator
 * @argc: the size of the argument vector
 * @argv: the argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
