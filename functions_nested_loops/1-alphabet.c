#include "main.h"
/**
 * main - Entry point
 * Description: Prints the alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char i = 'a';

	for(; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('/n');
	}
}
