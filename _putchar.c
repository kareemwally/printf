#include "main.h"

/**
 *_putchar-function
 *Description:only prints character
 *@c:the char we need to print
 *Return:(void)
 */
int	_putchar(char c)
{
	return(write(1, &c, 1));
}
