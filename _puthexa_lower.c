#include "main.h"


/**
 * _puthexa_lower-function that prints an hexa nbr
* @nbr: integer to be printed
* @count: number of bytes printed to stdout
* Return: void
*/
void	_puthexa_lower(unsigned int nbr, size_t *count)
{
	if (nbr >= 16)
		_puthexa_lower(nbr / 16, count);
	nbr %= 16;
	if (nbr >= 10)
		*count += _putchar(nbr + 87);
	else
		*count += _putchar(nbr + 48);
}

