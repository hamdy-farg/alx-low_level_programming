#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: argument
 *
 *
 *
 *
 * Return: 0
*/

void *malloc_checked(unsigned int b)
{
	int *t = malloc(b);

	if (t == 0)
		exit(98);

	return (t);
}
