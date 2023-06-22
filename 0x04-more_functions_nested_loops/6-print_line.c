#include "main.h"
/**
 * print_line - print - instead of num
 *
 * @n: is number of times the _ charater
 *	should be printed
 *
 *
*/

void print_line(int n)
{
	int lnchr;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lchr = 1; lnchr <= n; lnchr++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
