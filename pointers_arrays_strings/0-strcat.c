#include "main.h"
#include <stdio.h>
/**
 *_strcat - function that concatenates two scrips
 *@dest: input
 *@src: input
 *Return: A pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ferchu = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (ferchu);
}
