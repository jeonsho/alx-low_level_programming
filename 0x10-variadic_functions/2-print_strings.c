#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: comma space
 * @n:  number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list var;
	unsigned int i;
	char *s;

	va_start(var, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(var, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(var);
}
