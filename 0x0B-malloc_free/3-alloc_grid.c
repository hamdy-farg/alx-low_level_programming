#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - sdagdsg
 * @width: sdgdsg
 * @height: sdgsdg
 *
 *
 *
 * Return: dsagdsg
*/

int **alloc_grid(int width, int height)
{
	int **t, i, j;

	t = malloc(sizeof(*t) * height);

	if (width > 0 || height > 0 || t != 0)
	{
		for (i = 0; height > i; i++)
		{
			t[i] = malloc(sizeof(**t) * width);
			if (t[i] == 0)
			{
				while (i--)
				{
					free(t[i]);
				}
				free(t);
				return (NULL);
			}
			for (j = 0; width > j; j++)
			{
				t[i][j] = 0;
			}
		}

	}
	else
	{
		return (NULL);
	}
	return (t);

}

