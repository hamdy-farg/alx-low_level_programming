#include "main.h"

/**
 * _strncpy - thi function copy the strin to another one
 *
 * @dest: dest dest
 * @src: src src
 * @n : n n n n
 *
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = '\0';

	return (dest);
}