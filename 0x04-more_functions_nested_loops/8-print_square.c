#include "main.h"

/**
 * print_square - print a square using the charcter #
 *
 * @size: is the size of hte square.
 *
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
