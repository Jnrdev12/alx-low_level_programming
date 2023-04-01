nclude "main.h"
#include<stdio.h>

void strlen_noSpace(char *s)
{
	        int i;

		        for (i=0; s[i] != '\0'; i++)
				        {
						                if (s[i] = ' ')
									                {
												                        i++;
															                        continue;
																		                }
								                printf("%d", *(s + i));
										                putchar('\n');
												        }
}
