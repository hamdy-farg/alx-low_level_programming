#include "main.h"

/**
 * _strcmp - compare function
 *
 * @s1: s1 s1
 *
 * @s2: se se
 *
 *
*/

int _strcmp(char *s1, char *s2)
{

	int i, d;
	d = 0 ;

        for (i = 0; s1[i] != 0; i++)
		d += s1[i];

	for (i = 0; s2[i] != 0; i++)
		d -= s2[i];

	if  (d > 0){
		d -= 38;
	}
	else if (d < 0)
	{
	       	d += 38;
	}
	return (d);
}
