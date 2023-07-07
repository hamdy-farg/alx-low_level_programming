#include "main.h"
/**
 * *_memcpy - copy copy
 * @dest: dest dest
 * @src: src src src
 * @n: nnnnn nnn
 *
 *
 *
 * Return: dest dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > i; i++)
	{
		dest[i] =  src[i];
	}
	return (dest);
}
