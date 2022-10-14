#include <stdio.h>
#include "main.h"
/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int idx;

	if (needle == 0)
		return (haystack);

	while (needle)
	{
		idx = 0;

		if (haystack[idx] == needle[idx])
		{
			do {
				if (needle[idx + 1] == '\0')
					return (haystack);
				idx++;
			} while (haystack[idx] == needle[idx]);
		}
		haystack++;
	}
	return (NULL);
}
