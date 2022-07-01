#include <stdio.h>
/**
 * main - print alphabet 
 *
 * Description: using the main function
 * this program prints letters of alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
}
