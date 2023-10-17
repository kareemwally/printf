#include "main.h"

/**
 * _puthexa_upper-function that prints an hexa nbr
* @nbr: integer to be printed
* @count: number of bytes printed to stdout
* Return: void
*/
void	_puthexa_upper(unsigned int nbr, size_t *count)
{
	if (nbr >= 16)
		_puthexa_upper(nbr / 16, count);
	nbr %= 16;
	if (nbr >= 10)
		*count += _putchar(nbr + 55);
	else
		*count += _putchar(nbr + 48);
}

