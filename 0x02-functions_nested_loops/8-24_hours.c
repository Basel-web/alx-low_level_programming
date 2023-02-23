#include<stdio.h>
#include"main.h"

/**
 *  *  * void jack_bauer - Prints the last digit of a number.
 *   *   * Description: main fun
 *     *     * Return: 0
 */

void jack_bauer(void)
{
	int h = 0;
	int h1 = 0;
	int m = 0;
	int m1 = 0;

	while (m + m1 != 14)
	{
		putchar(h);
		putchar(h1);
		putchar(':');
		putchar(m);
		putchar(m1);
		putchar('\n');
	
		if (m1 < 9 && m == 0)
			m1++;
		else if (m1 == 9 && m < 6)
		{
			m1 = 0;
			m++;
		}

	}

}
