#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include<string.h>
#include<unistd.h>
#include<stdarg.h>
int _printf(const char *format, ...);
void print_ch (char c);
int print_str (char *st, int *count);
void print_persentage();
int formatting(va_list res, char a, int *count);
#endif
