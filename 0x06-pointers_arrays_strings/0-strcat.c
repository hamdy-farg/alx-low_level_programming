#include "main.h"

/**
 * _strcat - concatonate two strings
 * @dest: dest dest
 * @src: src src
 *
 * Return: String
 *
*/
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
	{
		c++;
	}

	for (c2 = 0; src[c2]; c2++)
	{
		dest[c++] = src[c2];
	}
	return (dest);
}
