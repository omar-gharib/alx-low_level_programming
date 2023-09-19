#include "main.h"

/**
 * *_strcpy - copies the string pointed to by stc
 * @dest: char type string
 * @src: char type string
 * Description: Copy the string pointed to by pointer 'src' to
 * the buffer pointed to bt 'dest'
 * Return: pointer to dest
 */

void *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}