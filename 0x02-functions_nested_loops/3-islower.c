#include "main.h"
/**
 *_islower - Entry point
 *
 *@c: function to be
 *
 * Return:1 if in lower case
 * and 0 if other wise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}
