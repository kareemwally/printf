#include "main.h"

/**
 * _putaddress-function that prints an address
* @nbr: integer to be printed
* @count: number of bytes printed to stdout
* Return: void
*/
void	_putaddress(unsigned long int nbr, size_t *count)
{
	if (nbr >= 16)
		_putaddress(nbr / 16, count);
	nbr %= 16;
	if (nbr >= 10)
		*count += _putchar(nbr + 87);
	else
		*count += _putchar(nbr + 48);
}

