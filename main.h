#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include<unistd.h>
#include<stdarg.h>

int	_printf(const char *format, ...);
int	_putchar(char c);
size_t	_putstr(char *str);
void	_putnbr(int nbr, size_t *count);
size_t	_strlen(const char *str);
void	_putnbr_base(long nbr, char *base, size_t *count);
size_t	_putrev_str(char *str);
int	_putrot_13(char *str);

#endif
