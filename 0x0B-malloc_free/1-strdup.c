#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this function copy the text
 *
 * @str: dasadsg
 *
 *
 * Return: adffga
*/

char *_strdup(char *str)
{
	int i, size;
	char *t;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	;

	t = malloc(sizeof(*str) * size + 1);

	if (t == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			t[i] = str[i];
		}
	}
	return (t);
}
