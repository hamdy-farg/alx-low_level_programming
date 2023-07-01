#include <unistd.h>

/**
 * _putchar - write teh character c
 * #c: the character to print
 *
 *
 *
 * Return: on success 1.
 *
 *
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
