#include "main.h"

/**
 * _puts_recursion - recursion function
 *
 * @s: sssss ssss
 *
 * Return: ssss
*/

void _puts_recursion(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
