#include<stdio.h>
#include "main.h"
#include <math.h>
#include <stdlib.h>

/**
 *  * print_last_digit - Prints the last digit of a number.
 *   * Description: main fun
 *    * @n: hehe
 *     * Return: 0
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;
	l = n % 10;
	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (l);
}
