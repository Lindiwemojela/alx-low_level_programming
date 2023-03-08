#include "main.h"

/**
 * _puts_recursion - Function prints s string followed by a new line
 * @s: The srting to print
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
