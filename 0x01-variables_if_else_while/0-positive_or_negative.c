#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main -Entry point
 *
 *Description: positive or negative
 *
 *Return: 0 (success)
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n  > 0)
		printf("%i positive", n);
	else if (n == 0)
		printf("%i is zero", n);
	else
		printf("%i negative", n);


	return (0);
}
