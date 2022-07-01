#include <stdio.h>
/**
 * main - print alphabets
 *
 * Description: using the main function
 * this program prints "a, b, c ...z  "A, B, C ...
 * Return:0
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
