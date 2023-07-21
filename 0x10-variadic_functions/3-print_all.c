#include "variadic_functions.h"

#include <stdio.h>
#include <stdarg.h>

/**
* print_all - dsg
* @format: dgs
* @...: adgs
* Return: adsg
*/


void print_all(const char * const format, ...)
{
	int  i = 0;
	char *stre, *sep = "";

	va_list args;

	va_start(args, format);

	if(format)
	{
		while(format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					stre = va_arg(args, char *);
					if (!stre)
						stre = "(nil)";
					printf("%s%s", sep, stre);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
