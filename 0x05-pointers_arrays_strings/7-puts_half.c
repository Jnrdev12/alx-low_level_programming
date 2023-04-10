#include<stdio.h>
#include "main.h"
#include <string.h>
/**
 * puts_half - to print half of a string
 *
 * @s:  variable to be used
 *
 * Return 0
 */
void puts_half(char *s)
{
	int len = strlen(s);
	int i;
	int half;

	half = len / 2;
	for (i = half; *(s + i) != '\0'; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
