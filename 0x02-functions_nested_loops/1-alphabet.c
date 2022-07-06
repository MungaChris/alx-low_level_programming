#include "main.h"
/**
 * main - print alphabets in lower case
 *
 * Description: using print_alphabet function
 * this program prints alphabets in lower case using a prototype 'main.c'
 * Return: 0
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
