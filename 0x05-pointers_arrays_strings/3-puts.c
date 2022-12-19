#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: the string
 * Return: 0
*/

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putschar(str[a]);
		a++;
	}
	_putchar('\n');
}
