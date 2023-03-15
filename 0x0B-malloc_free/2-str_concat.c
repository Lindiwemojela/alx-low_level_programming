#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function concentrates two strings of any size
 * @s1: The first string to be concentrated
 * @s2: The second string to be concentrated
 *
 * Return: The two strings concentrated
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[i])
		j++;

	l = i + j;
	s = malloc((size(char) * l) + 1);

	if (s == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
		s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}

		k++;

	}

	s[k] = '\0';
	return (s);
}
