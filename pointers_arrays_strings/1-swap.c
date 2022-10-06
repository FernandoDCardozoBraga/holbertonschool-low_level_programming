#include "main.h"
/**
 * swap_int - waps the values of two integers
 *@a: inout interger poiter
 *@b: inout interger poiter
 * Return: Nothing
 */
void swap_int(int *a, int *b)

{	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
