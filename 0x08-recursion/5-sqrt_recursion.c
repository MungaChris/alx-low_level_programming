#include "main.h"

/**
 * find_sqrt - Finds natural root of an input number
 * @num: The number to find the square root of
 * @root: The root to be tested
 *
 * Return: If number has a natural square root - the root
 *	   If number does not have natural root - -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *  @n: The number to return the square root of
 *
 *  Return: If n has a natural square root - natural square root of n
 *	    If n has no natural root, -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
