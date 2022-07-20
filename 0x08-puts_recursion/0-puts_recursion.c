#include "main.h"
/**
 * _puts_recursion - function to print a string
 *			followed by newline
 * @s: String to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursions(s + 1);
	}

	else
		_putchar('\n');
}
