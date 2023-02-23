#include<stdio.h>
#include"main.h"

/**
 *int _isupper-starting with 1 and 2,
 *@n:rated by a comma followed by a space.
 *@:Return: Always 0.
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
