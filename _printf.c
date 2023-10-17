#include "main.h"

/**
 *_print-function
 *Description:checks for the specifier and calls the right function
 *@c:the specifier we need to check
 *@ptr:the pointer to the arguments passed to the function _printf
 *Return:(int)
 */
static int	_print(char c, va_list ptr)
{
	size_t	count;

	count = 0;
	if (c == 'c')
		return (_putchar(va_arg(ptr, int)));
	else if (c == 'd' || c == 'i')
		_putnbr(va_arg(ptr, int), &count);
	else if (c == 'u')
		_putnbr(va_arg(ptr, unsigned int), &count);
	else if (c == 'x')
		_puthexa_lower(va_arg(ptr, unsigned int), &count);
	else if (c == 'X')
		_puthexa_upper(va_arg(ptr, unsigned int), &count);
	else if (c == 'p')
	{
		count += write(1, "0x", 2);
		_putaddress(va_arg(ptr, unsigned long), &count);
	}
	else if (c == 's')
		return (_putstr(va_arg(ptr, char *)));
	else
		return (write(1, &c, 1));
	return (count);
}

/**
 *_printf-function
 *Description:this function is similar to printf
 *@format:the stream we need to print to stdout
 *Return:(int)
 */
int	_printf(const char *format, ...)
{
	va_list	args;
	size_t	count;
	size_t	i;

	count	= 0;
	i		= 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			count += _print(format[++i], args);
		else if (format[i] != '%')
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
