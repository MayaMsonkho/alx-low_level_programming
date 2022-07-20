#include "main.h"
# include <stdio.h>

/**
 * _print_rev_recursion - Print a string
 * @s: The string to be printed
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
