#include "main.h"
#include <stdlib.h>
/**
 * create_array - this function created an array
 *
 * @size: size of an array
 * @c: charcter will putted in the array
 *
 * Return: one or null
*/

char *create_array(unsigned int size, char c)
{

	unsigned int i;

	char *t = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			t[i] = c;
		}
	}
	return (t);
}
