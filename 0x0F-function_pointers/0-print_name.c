#include "function_pointers.h"

/**
* print_name - prints the user name
* @name: adsg
* @f: function call as pointer
* Return: type void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

