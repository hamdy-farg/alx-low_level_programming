#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatonate two strings
 * @s1: adsgdsg
 * @s2: sdgdsg
 * @n: sdagdsg
 *
 * Returne: dsag
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;

	unsigned int i, s1_len, s2_len, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	if (s2_len <= n)
		n = s2_len;

	if (n >= s2_len)
	{
		n = s2_len;
	}

	t = malloc(s1_len + n + 1);

	if (t == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
	{
		if (i < s1_len)
			t[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{

		t[i] = s2[j];
		i++;
	}

	t[i] = '\0';
	return (t);
}
