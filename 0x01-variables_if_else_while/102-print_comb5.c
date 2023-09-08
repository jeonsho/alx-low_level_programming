#include <stdio.h>

/**
 *main - Entry point 
 *Return: Always 0(Success)
 */

int main(void)
{
	int i, j, first_digit1, second_digit1;

	for (i = 0; i <= 99; i++)
	{
		first_digit1 = i / 10;
		second_digit1 = i % 10;

		for (j = i; j <= 99; j++)
		{
			first_digit2 = j / 10;
			second_digit2 = j % 10;

			putchar('0' + first_digit1);
			putchar('0' + second_digit1);
			putchar(' ');
			putchar('0' + first_digit2);
			putchar('0' + second_digit2);

			if (i != 99 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}


