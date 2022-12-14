#include "main.h"
#include <stdio.h>

/**
 * main - returns the largest of three integers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
*/
int main(void)
{
	int a, b, c;
	int largest;
	
	largest = largest_number(a, b, c);

	if (a > b && b > c)
	{
		printf("%d is the largest number\n", largest);
	}
	else if (b > a && a > c)
	{
		printf("%d is the largest number\n", largest);
	}
	else
	{
		printf("%d is the largest number\n", largest);
	}
	return (0);
}
