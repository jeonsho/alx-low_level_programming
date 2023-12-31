#include "function_pointers.h"

/**
 *print_name - prints a name
 *@name:name to print
 *@f: function which print name
 *Return: nothing
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	else if (name != NULL && f != NULL)
		f(name);
}
