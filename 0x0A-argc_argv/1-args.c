#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints the number of arguments passed into it
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
