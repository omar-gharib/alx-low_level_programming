#include "main.h"

/**
 * main - entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char txt[] = "_putchar";
	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(txt[x]);
	}
	_putchar('\n');
	return (0);
}
