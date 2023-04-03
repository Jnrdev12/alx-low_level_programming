#include "main.h"
/**
 * print_line - to print n number of "_"
 *
 * @n: variable of type int
 *
 * Return 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
