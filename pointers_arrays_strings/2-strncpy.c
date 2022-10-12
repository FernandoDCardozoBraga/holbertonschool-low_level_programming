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
	int i;
	{
	for (i = 0; i < n && src[i] != '\0'; i++)
	         dest[i] = src[i];
     	for ( ; i < n; i++)
	             dest[i] = '\0';
	}
        return (dest);
}
 
