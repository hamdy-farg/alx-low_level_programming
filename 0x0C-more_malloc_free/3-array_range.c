#include "main.h"
#include <stdlib.h>

/**
 * array_range - range
 * @min: min
 * @max: dsgd
 *
 *
 * Return: adsggd
*/

int *array_range(int min, int max)
{
	int *t;
	int i;

	if (min > max)
		return (NULL);

	t = malloc((1 + (max - min)) * sizeof(*t));

	if (t == NULL)
		return (NULL);


	for (i = 0; min <= max; i++, min++)
		t[i] = min;

	return (t);
}
