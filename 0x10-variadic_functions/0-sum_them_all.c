#include "variadic_functions.h"
/**
* sum_them_all - this sum
* @n: afsd
* Return: dsg
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int s = 0, i = 0;

	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		unsigned int x = va_arg(args, int);

		s += x;
	}
	va_end(args);
	return (s);
}
