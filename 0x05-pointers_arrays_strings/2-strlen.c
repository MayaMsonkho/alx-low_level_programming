#include "main.h"

/**
 * _stlen - Return the length of a string
 * @str: The string to grt the length of
 * Return: The length of the string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
