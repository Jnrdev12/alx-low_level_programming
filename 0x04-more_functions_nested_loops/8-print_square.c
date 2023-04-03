#include "main.h"
/**
 * print_square - to print squae with #
 *
 * @size: variable for size
 *
 * Return 0
 */
void print_square(int size)
{
	int i;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			int l;

			for (l = 1; l <= size; l++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	else
	{
		_putchar('\n');
	}
}
