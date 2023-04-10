#include "main.h"
/**
 * rev_string - function to print string backward
 *
 * @a : pointer to first letter in string
 *
 * Return 0
 */
void rev_string(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
