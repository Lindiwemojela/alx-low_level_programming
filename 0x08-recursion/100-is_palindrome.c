#include "main.h"

/**
 * _strlen_recursion - Function returns the length of a string
 * @s: The string
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - Compares each character of the string
 * @s: The srting
 * @n1: Smallest iterator
 * @n2: Biggest iterator
 * Return: .
 */
