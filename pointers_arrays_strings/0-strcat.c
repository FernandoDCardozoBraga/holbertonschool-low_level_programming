#include "main.h"
#include <stdio.h>
/**
 *char - function appends the src string to the dest string, overwriting the terminating null byte
 *@dest: input
 *@src  
 *Return: Nothig
 */
void char *_strcat(char *dest, char *src);
{
	char *ferchu = dest;

	while (*dest)
		dest++;

	while (src)
		*dest++ = +src++;
		


	*dest = '\0';
	return = ferchu;
}

