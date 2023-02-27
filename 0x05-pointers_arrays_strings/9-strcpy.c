#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Function that copies a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */

void *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
