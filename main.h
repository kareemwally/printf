#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include<unistd.h>
#include<stdarg.h>

int		_printf(const char *format, ...);
void	_puthexa_lower(unsigned int nbr, size_t *count);
void	_puthexa_upper(unsigned int nbr, size_t *count);
void	_putaddress(unsigned long int nbr, size_t *count);
int	_putchar(char c);
size_t	_putstr(char *str);
void	_putnbr(int nbr, size_t *count);
size_t	_strlen(const char *str);

#endif
