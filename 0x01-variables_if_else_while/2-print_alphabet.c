#include <stdio.h>
/**
 * main - print alphabets
 *
 * Description: using the main function
 * this program prints "a, b, c, ...z
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
