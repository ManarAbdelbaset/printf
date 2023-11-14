#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * souf - Entry code
 * @format: input
 * @count: input
 * @args: input
 * Return: int
 */
int souf(const char *format, int count, va_list args)
{
	char c;

	if (*format == 'c')
	{
		c = va_arg(args, int);
		write(1, &c, 1);
		count++;
	}
	else if (*format == ' ')
	{
		format++;
	}
	else if (*format == '%')
		count = soufian_s(count);
	else if (*format == 'd' || *format == 'i')
		count = med(args, count);
	else if (*format == 's')
		count = manr_st(args, count);
	else
	{
		c = '%';
		write(1, &c, 1);
		write(1, format, 1);
		count += 2;
	}
return (count);
}
