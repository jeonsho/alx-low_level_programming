#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _printchar - print char type element from va_list
 * @var: va_list passed to function
 */
void _printchar(va_list var)
{
	printf("%c", va_arg(var, int));
}

/**
 * _printstr - print string element from va_list
 * @var: va_list passed to function
 */
void _printstr(va_list var)
{
	char *s;

	s = va_arg(var, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * _printfloat - print float type element from va_list
 * @var: va_list passed to function
 */
void _printfloat(va_list var)
{
	printf("%f", va_arg(var, double));
}

/**
 * _printint - print int type element from va_list
 * @var: va_list passed to function
 */
void _printint(va_list var)
{
	printf("%d", va_arg(var, int));
}

/**
 * print_all - print anything passed if char, int, float, or string.
 * @format: string of formats to use and print
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *sep;

	checker storage[] = {
		{ "c", _printchar },
		{ "f", _printfloat },
		{ "s", _printstr },
		{ "i", _printint }
	};

	i = 0;
	sep = "";
	va_start(args, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].type[0] == format[i / 4])
		{
			printf("%s", sep);
			storage[j].f(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
