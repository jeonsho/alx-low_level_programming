#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all -  returns the sum of all its parameters.
 *@n: variadic inputs
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list var;

	va_start(var, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(var, int);
	}

	va_end(var);

	return (sum);
}
