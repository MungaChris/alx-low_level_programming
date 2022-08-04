#define VARIADIC_FUNCTIONS_H
#ifndef VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/*
 * struct printer - a new struct defining a printer.
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints
 *		a data type corresponding to a symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

}printer_t;

int sum_them_all(const unsigned int n, ...);

#endif
