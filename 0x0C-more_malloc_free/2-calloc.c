#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: dsagdg
 * @size: dgdsag
 *
 *
 *
 * Return: adsgds
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int i;

	t = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (NULL);

	if (t == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		t[i] = 0;

	return (t);
}
