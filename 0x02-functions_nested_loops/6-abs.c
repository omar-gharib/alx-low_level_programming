#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 *
 * @n: int input.
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
