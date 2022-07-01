#include <stdio.h>
/**
 * main - print numbers of base 10 
 *
 * Description: using the main function
 * this program prints numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
