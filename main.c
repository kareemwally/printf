#include "main.h"
/**
 *print_ch-function
 *Description:only prints character
 *@c:the char we need to print
 *Return:(void)
 */
void print_ch (char c)
{
write(1, &c, 1);
}
/**
 *print_str-function
 *Description:only prints strings to stdout
 *@st:string we need to print
 *@count:total number of bytes to print
 *Return:(int)
 */
int print_str (char *st, int *count)
{
size_t i;
int r = *count;
for (i = 0; i < strlen(st); i++)
{
print_ch(st[i]);
r++;
}
return (r);
}
/**
 *print_persentage-function
 *Description:simple function to print %
 *Return:(void)
 */
void print_persentage(void)
{
int i = 37;
write(1, &i, 1);
}
/**
 *_printf-function
 *Description:this function is similar to printf
 *@format:the stream we need to print to stdout
 *Return:(int)
 */
int _printf(const char *format, ...)
{
size_t i; 
int count = 0;
va_list res;
va_start(res, format);
for (i = 0; i < strlen(format); i++)
{
if (format[i] == '%' && format[i + 1] == 's')
{
i++;
count = print_str(va_arg(res, char *), &count);
}
else if (format[i] == '%' && format[i + 1] == 'c')
{
i++;
print_ch(va_arg(res, int));
count++;
}
else if (format[i] == '%' && format[i + 1] == '%')
{
count++;
print_persentage(void);
}
else
{
print_ch(format[i]);
count++;
}
}
va_end(res);
return (count);
}
