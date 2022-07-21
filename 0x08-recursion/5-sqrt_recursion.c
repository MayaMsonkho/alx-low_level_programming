#include "main.h"

int find_sqrt(int num, int root);

int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - runs the recursion
 * find_sqrt - Finds the natural square root of an inputted number.
 * @n: The number to return the square root of.
 * Return: If n has a natural square root - the natural square root of n.
 *
 *  If n does not have a natural square root - -1.
 *
 *  If the number does not have a natural square root - -1.
 *
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

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @root: root of the function
 * @num: numbber to be rooted
 * Return: returns find_sqrt
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
