#include "main.h"

/**
 * factorial - Function returns the factorial of a number
 * @n: The number to return the factorial
 *
 * Return: Integer value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
