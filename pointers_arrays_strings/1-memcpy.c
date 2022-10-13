#include "main.h"
#include <stdio.h>
/**
 *_memcpy - function returns a pointer to the first occurrence
 *of the character c in the string s.
 *@dest: input
 *@src: output
 *@n: output
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		char *ferchu = dest;

		while (n--)
		{
			*dest = *src;
			src++;
			dest++;
		}
		return (ferchu);
}
