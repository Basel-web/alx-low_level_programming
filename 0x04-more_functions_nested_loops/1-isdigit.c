#include"main.h"

/*
 * int _isdigit-is a function checkif the the char is a digit or not
 * @n:the variable of the function
 * return:return 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
