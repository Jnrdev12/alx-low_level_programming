#include<stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * Description: to change lower acse to upper case
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char str[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		str[i] = tolower(str[i]);
		return (0);
	}

	printf("%s", str);
	return (0);
}
