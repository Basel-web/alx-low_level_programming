#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - prints n to 98
 * @n var
 * @return 
 */

void print_to_98(int n)
{
	int i;

	/* first section*/
	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			printf("%d, ", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
	/* sec section*/
	else if (n == 98)
		printf("98\n");
	else
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
		printf("\n");
	}
}
