#include<stdio.h>
#include "main.h"
/**
 *  * print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
 *   *
 *    * Return: void
 */

void print_alphabet_x10(void)
{
	int t = 10;

	while (t--)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
		putchar('\n');
	}
}
