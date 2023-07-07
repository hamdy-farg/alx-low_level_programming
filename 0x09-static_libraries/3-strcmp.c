#include "main.h"

/**
 * _strcmp - compare function
 *
 * @s1: s1 s1
 *
 * @s2: se se
 *
 * Return: d dd d
*/

int _strcmp(char *s1, char *s2)
{

	int d = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			d = ((int) *s1 - 48) - ((int) *s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (d);
}
