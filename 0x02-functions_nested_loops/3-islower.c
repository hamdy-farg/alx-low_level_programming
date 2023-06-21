#include "main.h"

/**
 * _islower - function to check if
 *		character is lowercase
 *
 * Description: sadf
 * @c: checks input of function
 * Return: returns 1 if is lowercase
 *	otherwise always O (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
