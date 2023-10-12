#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - a function that prints anything.
 *c = char, i = int, f = float, s = char *(if null print (nil))
 *@format: list of arg types
 *Return: nothing
 */
void print_all(const char *const format, ...)
{
	va_list var;
	char *s;
	int i;
	float num;
	char c;
	int print = 0;

	va_start(var, format);

	while (*format)
	{
		if (*format == 'c' || *format == 'i' || *format == 'f' || *format == 's')
		{
			if (*format == 'c')
			{
				c = (char) va_arg(var, int);
				printf("%c", c);
			}
			else if (*format == 'i')
			{
				i = va_arg(var, int);
				printf("%d", i);
			}
			else if (*format == 'f')
			{
				num = (float) va_arg(var, double);
				printf("%f", num);
			}
			else if (*format == 's')
			{
				s = va_arg(var, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
			}

			if (*(format + 1))
			{
				printf(", ");
			}
		}

		format++;
	}

	printf("\n");

	va_end(var);
}
