#include"main.h"
/**
 *print_ch-function
 *Description:only prints character
 *@c:the char we need to print
 *Return:(void)
 */
void print_ch (char c)
{
putchar(c);
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
int i, r = *count;
for (i = 0; i < strlen(st); i++)
{
putchar(st[i]);
r++;
}
return (r);
}
/**
 *print_persentage-function
 *Description:simple function to print %
 *Return:(void)
 */
void print_persentage()
{
putchar(37);
}
/**
 *formatting-function
 *Description:this function decides the function to print 
 *@res:the list of arguments
 *@a:the specifying char
 *@count:the total number of bytes
 *Return:(int)
 */
int formatting(va_list res, char a, int *count)
{
int r = * count;
switch (a)
{
case 's':
r = print_str(va_arg(res, char *), count);
break;
case 'c':
print_ch(va_arg(res, int));
r++;
break;
case '%':
print_persentage();
r++;
break;
}
return (r);
}
/**
 *_printf-function
 *Description:this function is similar to printf
 *@format:the stream we need to print to stdout
 *Return:(int)
 */
int _printf(const char *format, ...)
{
int i, count = 0;
va_list res;
va_start(res, format);
for (i = 0; i < strlen(format); i++)
{
if (format[i] == '%')
{
i++;
count = formatting(res, format[i], &count);
va_arg(res, int);
}
else
{
putchar(format[i]);
count++;
}
}
va_end(res);
return (count - 1);
}
