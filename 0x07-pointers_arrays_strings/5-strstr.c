#include "main.h"

/**
 * _strstr - sdagdsag
 * @needle: dasgdsg
 * @haystack: adgdsg
 *
 * Return: dasgfdag
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		for (;  *p != '\0' && *l == *p; p++)
		{
			l++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
