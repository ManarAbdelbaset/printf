#include <unistd.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - printf
 * @format: input
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
	if ((format[0] == '%' && format[1] == ' ') && (!format[2]))
		return (-1);
	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count = printf(format, count, args);
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
