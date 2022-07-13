#include "main.h"

/**
 * _strcat - Concantenates two strings
 * @dest: A poointer to the string to be concantenated upon.
 * @src: The source string to be appended to @dest
 * Return: A pointer to the destination string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_length = 0;

	while (dest[index++])
		dest_length++;

	for (index = 0; src[index]; index++)
		dest[dest_length++] = src[index];

	return (dest);
}
