#include "main.h"
/**
 * main - print alphabets in lower case
 *
 * Description: using the main function
 * this program prints alphabets in lower case
 *Return: 0
 */
 void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
