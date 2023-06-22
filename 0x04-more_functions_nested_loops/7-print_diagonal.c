#include "main.h"
/**
 * print_diagonal - print
 *
 * @n: is the number of times the / charcter
 *
 *
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space <= postn; space++)
			{
				_putchar(' ');
			}
			_putchar('/'); /*is equal to '/'char */
			_putchar('\n');
		}
	}
}