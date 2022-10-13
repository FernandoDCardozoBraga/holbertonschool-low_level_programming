#include "main.h"
#include <stdio.h>
/**
 *_strspn - Returns the number of bytes in the initial segment
 *of s which consist only of bytes from accept
 couny*@s: input
 *@accept: input
 *Return:  the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *ferchu = accept;

		while (*s)
		{
			flag = 0;
			while (*accept)
			{
				if (*accept == *s)
				{
					count++;
					flag = 1;
					break;
				}
				accept++;
			}

		s++;
		accept = ferchu;
		if (flag == 0)
			break;
		}
		return (count);
}
