#include "main.h"
/**
 * print_alphabet_x10 - to output all alphabets
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int n;
	int i;

	for (i = 0; i < 10; i++)
	{
		n = 97;
		while (n <= 122)
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
	}
}
