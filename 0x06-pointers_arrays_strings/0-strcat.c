#include "main.h"
/**
 * strcat - concatenates string pointed to by @src, including the
 *	    terminating null byte, to the end of string pointed to by @dest
 * @dest: a pointer to the string to be concatenated upon
 * @src: Source string to be appended to @dest
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
