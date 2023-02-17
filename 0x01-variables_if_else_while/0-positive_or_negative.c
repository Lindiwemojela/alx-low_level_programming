#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for functions main goes there */
int main(void)
{
	int n;

	scarnd(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	(
		print("%d is positive\n", n);
	)
	else if (n -- 0)
	(
		print("%d is zero\n", n);
	)
	else (n < 0)
	(
		print("%d is negative\n",n);
	)
	return (0);
}
