#include <stdio.h>

/**
 *main - Entry point 
 *Return: Always 0(Success)
 */

int main(void)
{
	int i, first_digit, second_digit;

	for (i = 0; i <= 99; i++)
	{
		first_digit = i / 10;
		second_digit = i % 10;

		putchar('0' + first_digit / 10);
		putchar('0' + first_digit % 10);

		putchar(' ');

		putchar('0' + second_digit / 10);
		putchar('0' + second_digit % 10);

		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

