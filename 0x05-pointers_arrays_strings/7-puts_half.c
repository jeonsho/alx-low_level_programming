#include "main.h"

/**
 * puts_half -  prints half of a string
 *  followed by a new line.
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len ,st_index,i;
	
	
	if (len % 2 == 0)
	{
		st_index = len / 2;
	}
	else
	{
		st_index = (len -1 ) / 2;
	}
	for (i = st_index; i < len ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
