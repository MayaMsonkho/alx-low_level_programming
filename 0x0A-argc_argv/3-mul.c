#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function  that receives the two arguments.
 * @argc: The argument count.
 * @argv: The argument vector, where the strings are kept.
 * Return: If there is an error it returns 1 else 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);

	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);

}
