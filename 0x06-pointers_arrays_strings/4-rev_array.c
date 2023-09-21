#include "main.h"

/**
 *reverse_array - a function that reverses the content of an array of
 *integers.
 *@a: This is the input array
 *@n: This is the positions have the array
 *
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
