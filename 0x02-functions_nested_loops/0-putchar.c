#include <stdio.h>
#include "main.h"
/**
 * _putchar - Writes character c to stdout.
 * @c: The character to print.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char put[8] = {'_' , 'p' , 'u' , 't' , 'c' , 'h' , 'a' , 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(_putchar); c++)
	{
		put(_putchar[c]);
	}
	putchar('\n');
	return (0);
}
