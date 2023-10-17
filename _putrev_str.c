#include "main.h"

/**
 *_putrev_str-function
 *Description:only prints strings to stdout
 *@str:string we need to print
 *Return:(void)
 */
size_t	_putrev_str(char *str)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!str)
		return (write(1, "(null)", 6));
	j = _strlen(str);
	while (j)
	{
		write(1, &str[j], 1);
		i++;
		j--;
	}
	write(1, &str[j], 1);
	i++;
	return (i);
}

