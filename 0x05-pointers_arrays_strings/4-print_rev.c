#include<stdio.h>
#include "main.h"
#include<string.h>
/**
 * print_rev -  to print the reverse of a string
 *
 * @str-variable to be used
 *
 * Return 0
 */
void print_rev(char *s)
{
	int len =strlen(s);
	int i;
	for (i = len - 1 ; i >= 0; i--)
	{
		char r = *(s+i);
		_putchar(r);;
	}
	_putchar('\n');
}
