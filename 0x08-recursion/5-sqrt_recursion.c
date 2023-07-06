#include "main.h"
/**
 * _sqrt_recursion - squar
 *
 * @n: nnnnn
 *
 *
 * Return: 1 if success
*/

int _sqrt_recursion(int n)
{
	return (squar(n, 1));
}

/**
 * squar - squar
 * @n: int to find squar
 * @val: squar root
 *
 * Return: val
*/

int squar(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return (squar(n, val + 1));
	}
	else
	{
		return (-1);
	}
}
