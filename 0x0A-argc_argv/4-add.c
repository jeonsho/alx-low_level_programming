#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point of the program
 *@argc: Number of command-line arguments
 *@argv: Array of command-line argument strings
 *Return:
 *  - 0: The program executed successfully.
 *  - 1: An error occurred, such as non-digit input or negative numbers.
 */
int main(int argc, char *argv[])
{
	int sum = 0, int i;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *find_letter = argv[i];

			while (*find_letter != '\0')
			{
				if (*find_letter < '0' || *find_letter > '9')
				{
					printf("Error\n");
					return (1);
				}

				find_letter++;
			}

			int num = atoi(argv[i]);
			sum += num;
		}

		printf("%d\n", sum);
	}

	return (0);
}
