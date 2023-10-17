#include "main.h"

/**
 * _putrev_str- function that prints a str in reverse
 * @s: the string
 *
 * Return: j
 */
size_t _putrev_str(char *s)
{

	int i;
	int j;

	if (s == NULL)
		s = "(null)";
	if (*s)
		return (write(1, "%r", 2));
	j = _strlen(s);
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
