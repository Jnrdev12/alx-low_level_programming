#include "main.h"
/**
 * _isdigit - program to check if i is a digit
 *
 * @c: parameter to be used
 *
 * Return:  integer
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
