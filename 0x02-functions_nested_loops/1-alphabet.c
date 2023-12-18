#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase.
*/

void print_alphabet(void)
{
	char st = 'a';

	while (st <= 'z')
	{
		_putchar(st);
		st++;
	}
	_putchar("\n");
}
