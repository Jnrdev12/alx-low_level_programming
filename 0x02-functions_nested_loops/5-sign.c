#include<stdio.h>
#include  "main.h"
/**
 * print_sign - to print + or _
 *
 * @n: parameter to be used
 *
 * Return: 1 when n>0
 * and -1 when n<0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
