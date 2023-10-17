#include "main.h"


/**
 * _putnbr_base-function that prints a nbr to base
* @nbr: integer to be printed
* @base: str base
* @count: number of bytes printed to stdout
* Return: void
*/
void	_putnbr_base(long nbr, char *base, size_t *count)
{
	int		lbase;

	lbase = _strlen(base);
	if (nbr < 0)
	{
		*count += _putchar('-');
		nbr *= -1;
	}
	if (nbr < lbase)
		*count += _putchar(base[nbr]);
	if (nbr >= lbase)
	{
		_putnbr_base(nbr / lbase, base, count);
		_putnbr_base(nbr % lbase, base, count);
	}
}

