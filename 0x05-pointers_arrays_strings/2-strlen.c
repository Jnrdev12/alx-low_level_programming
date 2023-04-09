#include "main.h"
#include<stdio.h>
/**
 * _strlen - function to print lenghth of a string
 *
 * @s: variable to be used
 *
 * Return: counter
 */
int _strlen(char *s)
{
	int i;
	int counter;

	counter = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		counter = counter + 1;
	}
	return (counter);
}
