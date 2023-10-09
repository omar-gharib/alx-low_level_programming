#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
