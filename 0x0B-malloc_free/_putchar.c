#include "main.h"
#include <unistd.h>
/**
 * _putchar - write a character c in the stdout
 * @c: the character to be printed
 * Return: on success 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
