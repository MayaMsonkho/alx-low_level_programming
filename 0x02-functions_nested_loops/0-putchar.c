#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry Point
 * Description: Loops and Functions
 * Return: Always 0 (success)
 */
int main(void)
{
	char word[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
