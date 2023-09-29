#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int num = 0

	if (*s > '\0')
	{
		num += _strlen_recursion(s + 1) + 1;
	}
	return (num);
}
