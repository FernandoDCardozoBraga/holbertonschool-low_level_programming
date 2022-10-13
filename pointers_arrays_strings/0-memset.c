#include "main.h"
#include <stdio.h>
/**
 *_memset - function fills the first n bytes of
 *the memory area pointed to by s with the constant byte b
 *@s: input
 *@n: output
 *@b: input
 *Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ferchu = s;

		while (n--)
		{
			*s = b;
			s++;
		}
	return (ferchu);
}
