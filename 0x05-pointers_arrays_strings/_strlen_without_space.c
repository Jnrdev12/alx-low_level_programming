#include<stdio.h>

int strlen_noSpace(char *s)
{
	int i;
	int count = 0;

	for (i=0; s[i] != '\0'; i++)
	{
		if (s[i] = ' ')
		{
			i++;
			continue;
		}
		count = count + 1;
	}
	return  count;
	putchar('\n');
}


