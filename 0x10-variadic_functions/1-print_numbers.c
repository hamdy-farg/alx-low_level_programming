#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - print numbers
* @separator: the string separator
* @n: dg
* @...: dags
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
		printf("%d%s", va_arg(args, int),
			i ? (separator ? separator : "") : "\n");
	va_end(args);
}
