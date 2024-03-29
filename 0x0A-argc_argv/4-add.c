#include <stdio.h>

#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 * followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 * Otherwise - 0.
 */

int main(int argc, char *argv[])
{
	int num, i, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
