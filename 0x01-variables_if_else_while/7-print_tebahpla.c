#include <stdio.h>
/**
 * main - prints alphabets in reverse order
 *
 * Description; using the main function
 * this program prints alphabetical numbers in reverse order
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');

	return (0);
}
