#include "main.h"

/**
 * _pow_recursion - pow pow pow
 *
 * @x: xxxxx
 * @y: yyyy
 *
 * Return: jjjjjjjjjjjjjjjjj
 *
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
