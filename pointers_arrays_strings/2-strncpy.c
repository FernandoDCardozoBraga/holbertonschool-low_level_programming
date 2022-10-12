#include "main.h"
#include <stdio.h>
/**
 *_strncpy - function that copies a string
 *@src: input
 *@dest: input
 *@n: input
 *Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;
		dest=[i] = '\0'

	return (temp);
}
