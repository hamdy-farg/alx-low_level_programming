#include "variadic_fucntions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - adsg
* @separator: fdsag
* @n: dsg
* @...: dsg
* Return: dag
*/



void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list args;

	if (!n)
	{
		printf("\n");
	}
	va_start(args, n);
	while (i--)
	{
		print("%s%s", (str = va_arg(args, char *)) ? str : "(nil)",
			i ? (separator ? separator : "") : "\n");
	}
	va_end(args);
}
