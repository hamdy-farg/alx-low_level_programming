#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatonate to function
 * @s1: si si
 * @s2: s2 s2
 *
 *
 *
 * Return: asdfasddasg
*/

char *str_concat(char *s1, char *s2)
{
	char  *s3;
	
	int t, i, j, sum;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	
	for (i = 0; s1[i] != '\0'; i++)
	;

	for (j = 0; s2[j] != '\0'; j++)
	;
	

	sum = i + j  ;
	
	s3 = malloc(1 + sizeof(char) * sum);
	
	if (s3 == 0)
	{
		return (0);
	}

	for (t = 0; t <= sum ; t++)
	{
		if (t < i)
		{
			s3[t] = s1[t];
		}
		else
		{
			s3[t] = s2[t - i];
		}
	}
	s3[t] = '\0';
	return (s3);

}
