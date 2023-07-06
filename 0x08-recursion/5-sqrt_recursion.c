#include "main.h"
/**
 * _sqrt_recursion - squar
 *
 * @n: nnnnn
 * @val: squar
 *
 * Return: 1 if success
*/

int squar(int n, int val);
int _sqrt_recursion(int n)
{
	return (squar(n, 1));
}

/**
 * squar - squar
 * @n: int to find squar
 * @val: squar root thisi
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
