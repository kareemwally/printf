#include "main.h"

/**
 *_putstr-function
 *Description:only prints strings to stdout
 *@str:string we need to print
 *@count:total number of bytes to print
 *Return:(void)
 */
size_t	_putstr(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		write(1, str, 1);
		i++;
		str++;
	}
	return (i);
}
