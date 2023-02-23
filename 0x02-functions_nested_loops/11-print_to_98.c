#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - prints n to 98
 * @n var
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		_putchar(i + '0');
		if (i != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
	}
}
