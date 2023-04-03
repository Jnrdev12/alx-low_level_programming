#include "main.h"
/**
 * print_diagonal - to print n number of space with \ to produce a diagonal
 * @n : variable for number of size
 *
 * Return - integer
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			int l;

			for (l = 1; l <= i; l++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
