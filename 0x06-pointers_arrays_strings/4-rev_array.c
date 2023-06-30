#include "main.h"

/**
 * reverse_array - rever the elemnt of an array
 *
 * @a: aadsdff
 *
 * @n: dddd
 *
 * Return: Nothing
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, i--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
