#include "main.h"

/**
 * *_strcpy - check the code
 * @dest: first parameter
 * @src: second parameter
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
