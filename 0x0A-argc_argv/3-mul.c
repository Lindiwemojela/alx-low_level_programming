#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Prints the multiplication two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
