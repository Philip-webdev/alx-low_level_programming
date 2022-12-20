#include "main.h"
/**
 * puts_half - print the second half of the string
 * @str: input
*/

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	*str-- (len / 2);
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
