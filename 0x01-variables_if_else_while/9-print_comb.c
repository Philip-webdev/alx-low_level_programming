#include <stdio.h>
/**
 * main - print wll of combination of single digits
 *
 * Return: 0
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n != 9)
		{
			putchar(' ');
			putchar(',');
		}
		n++;
	}
}
