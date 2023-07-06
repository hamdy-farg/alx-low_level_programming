#include  "main.h"

/**
 * is_prime_number - is prime numberr
 *
 * @n: dasgdg
 * @d: dsag
 *
 * Return: 0 or 1
*/

int check_prime(int n, int d);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check prime
 * @n: int
 * @d: int
 * Return: int
*/

int check_prime(int n, int d)
{
	if (d >= n && n > 1)
	{
		return (1);
	}
	else if (n % d == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, d + 1));
	}
}
