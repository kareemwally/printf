#include "main.h"

/**
 * _putnbr - function that prints an integer
* @nbr: integer to be printed
* @count: number of bytes printed to stdout
* Return: void
*/
void	_putnbr(int nbr, size_t *count)
{
	char	c;

	if (nbr == -2147483648)
	{
		*count += write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		*count += write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
		_putnbr(nbr / 10, count);
	c = nbr % 10 + 48;
	*count += write(1, &c, 1);
}