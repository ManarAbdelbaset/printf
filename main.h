#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);
int souf(const char *format, int count, va_list args);
int soufian_s(int count);
int manr_st(va_list args, int count);
int med(va_list ap, int count);
int abd(long int d_d, int man);
#endif
