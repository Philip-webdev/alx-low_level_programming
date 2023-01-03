#include "main.h"
/**
 * _memset - writes a function that fils memory with a constant byte
 * @n: byte
 * @s: pointer
 * @b: constant byte
 * Return: Nothing
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

