#include "printf.h"

/**
 *print_ch-function
 *Description:only prints character
 *@c:the char we need to print
 *Return:(void)
 */
void    print_ch(char c)
{
	write(1, &c, 1);
}

/**
 *_strlen-function
 *Description:count length of a string
 *@str:the pointer to string to be counted
 *Return:(lenght)
 */
size_t  _strlen(const char *str)
{
	size_t  len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/**
 *print_str-function
 *Description:only prints strings to stdout
 *@str:string we need to print
 *@count:total number of bytes to print
 *Return:(void)
 */
void    print_str(char *str, int *count)
{
	size_t i;

	for (i = 0; i < _strlen(str); i++)
	{
		print_ch(str[i]);
		(*count)++;
	}
}

/**
 *_printf-function
 *Description:this function is similar to printf
 *@format:the stream we need to print to stdout
 *Return:(int)
 */
int     _printf(const char *format, ...)
{
	size_t  i;
	int     count;
	va_list res;

	count = 0;
	va_start(res, format);
	for (i = 0; i < _strlen(format); i++)
	{
		if (format[i] == '%' && format[i + 1] == 's')
		{
			print_str(va_arg(res, char *), &count);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			print_ch(va_arg(res, int));
			count++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			print_ch('%');
			count++;
			i++;
		}
		else if (format[i] != '\0')
		{
			print_ch(format[i]);
			count++;
		}
	}
	va_end(res);
	return (count);
}
