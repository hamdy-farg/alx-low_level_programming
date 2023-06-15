#include <stdio.h>
/**
 * main - Entry point
 * Description: using sizeof to print the size of various types.
 * Return: Always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(int));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
