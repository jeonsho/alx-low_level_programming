#include "main.h"

/**
 *print_numbers -  prints the numbers, from 0 to 9
 *followed by a new line
 *Return: returns nothing
 */

void print_numbers(void)
{
	int num = 48;

	for (num = 48; num >= 57; num++)
	{
		_putchar(num);
	}

	_putchar(10);
}
