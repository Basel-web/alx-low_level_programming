#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand((tine(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zreo\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
