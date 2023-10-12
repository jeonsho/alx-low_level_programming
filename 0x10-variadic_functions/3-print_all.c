#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdbool.h>
/**
 * print_all - Function that prints anything
 *
 * @format: This is the format to print a value
 *
 */
void print_all(const char * const format, ...)
{
	va_list var;
	char *str;
	int i;

	i = 0;
	va_start(var, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(var, int));
				break;
			case 'f':
				printf("%f", va_arg(var, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(var, int));
				break;
			case 's':
				str = va_arg(var, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
		format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(var);
}
