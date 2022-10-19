#include"main.h"
#include<stdlib.h>
/**
 *create_array - function that creates an array of chars,
 *and initializes it with a specific char.
 *@size: the size of the array
 *@c: character
 *Return: a pointer to the array, or NULL if it faileet null.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size);

	if (s == NULL)
		return (NULL);

	if (s == 0)
		return (0);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
