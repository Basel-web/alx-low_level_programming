#include<stdio.h>
#include "main.h"

/**
 *  * print_last_digit - Prints the last digit of a number.
 *   * Description: main fun
 *    * @n: hehe
 *     * Return: 0
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	_putchar(l);
	return (_abs(l));
}
