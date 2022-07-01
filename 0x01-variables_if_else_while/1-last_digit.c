#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if n is positive, negative or 0
 *
 * Description: using the main function
 * this program prints "n is greater than 5, equal to 5 or less than 5
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is equal to 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
	;
}
