#include "dog.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	struct dog my_dog;

		init_dog(&my_dog, "Poppy", 3.5, "Bob");
			printf("My name is %s, and I am %.lf :) - Woof!\n", my_dog.name,
			my_dog.age);

			return (0);
}