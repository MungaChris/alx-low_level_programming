#include "main.h"
 /*
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropriately
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
