#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_c - Print character .
 * @var: name va_list
 *
 * Return: Nothing.
 */

void op_c(va_list var)
{
	printf("%c", va_arg(var, int));
}
/**
 * op_i - Print Integer
 * @var: name va_list
 *
 * Return: Nothing.
 */

void op_i(va_list var)
{
	printf("%i", va_arg(var, int));
}
/**
 * op_f - print FLoat numbers
 * @var: name of va_list
 *
 * Return: Nothing.
 */

void op_f(va_list var)
{
	printf("%f", va_arg(var, double));
}
/**
 * op_s -print string
 * @var: name va_list
 *
 * Return: Nothing.
 */

void op_s(va_list var)
{
	char *s;

	s = va_arg(var, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - a function that prints anything.
 * @format: number of arguments in character format
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{

	va_list all;
	unsigned int i, j;
	char *separator = "";

	f ops[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		};

	va_start(all, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", separator);
				separator = ", ";
				ops[j].f(all);
				break;
			}
			j++;
		}
	i++;
	}

	printf("\n");
	va_end(all);
}
