#include "main.h"
/**
 * print_alphabet - Check description
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Return: Nothing (Success)
 */

void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
