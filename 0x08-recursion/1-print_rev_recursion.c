#include "main.h"

/**
 * _print_rev_recursion - Funtion prints a string in reverse
 * @s: The srting to be printed
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
