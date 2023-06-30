#include "main.h"

/**
 * _strncat - concatonate two strings
 * @dest: dest dest
 * @src: src src
 * @n: n n n
 * Return: String
 *
*/
char *_strncat(char *dest, char *src, int n)
{
	int c, c2;

	c = 0;
	while (dest[c])
	{
		c++;
	}

	for (c2 = 0; c2 < n && src[c2] != '\0'; c2++)
	{
		dest[c + c2] = src[c2];
	}
	dest[c + c2] = '\0';
	return (dest);
}
