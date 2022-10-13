#include "main.h"
#include <stdio.h>
/**
 *_strchr - Returns a pointer to the first occurrence of the
 *character c in the string s, or NULL if the character is not found
 *@s: input
 *@c: input
 *Retun: a pointer to c
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
