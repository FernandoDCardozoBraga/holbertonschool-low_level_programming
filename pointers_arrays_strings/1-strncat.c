#include "main.h"
#include <stdio.h>
/**
 *_strncat - function that prints a string, followed by a new line
 *@src: input
 *@dest: input
 *@n: input
 *Return: Nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int ferchu = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		ferchu++;
		src++;
	}
	while (*dest)
		dest++;

	if (n > ferchu)
		n = ferchu;
	src = start;

	for (; i < n; i++)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
