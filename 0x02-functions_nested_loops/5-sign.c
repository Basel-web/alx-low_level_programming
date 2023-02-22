#include<stdio.h>
#include "main.h"

/**
 *  * _isalpha - main func
 *   * Description: heho
 *    * @c: heho
 *     * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
