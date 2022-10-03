#include "main.h"
/**
 * print_alphabet_x10 - Check description
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: Nothing (Success)
 */

void print_alphabet_x10(void)
{
	int j;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	}
}
