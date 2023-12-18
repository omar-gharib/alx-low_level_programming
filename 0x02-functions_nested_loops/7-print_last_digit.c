#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number.
 *
 * @n: int input.
 *
 * Return: last digit
*/

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		n = -n;

	digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}
