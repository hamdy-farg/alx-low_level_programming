#include <unistd.h>
#include "main.h"

/**
 *_putchar - writes the character c to stdout
 * @c: The charcter to print
 *
 * Return: On success 1.
 *	  On error, -1 is returned errno is set apprpriataly
*/
int _putchar (char c)
{
	return (write(1, &c, 1));
}
