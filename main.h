#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _puts(char *string);
int _printf(const char *format, ...);
int _putchar (char c);
int output_int(int num);
int output_bin(const char *str, va_list arg);
#endif
