#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 * Return: always 0
 */

int main(void)
{
	char s[] = "Expect the best. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}