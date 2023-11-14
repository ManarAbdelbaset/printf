#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * med - treating %d
 * @ap: input
 * @count: input
 * Return: int
 */
int med(va_list ap, int count)
{
	long int d = va_arg(ap, int);
	long int d_d = d;

	if (ap == NULL)
		return (-1);
	if (d == 0)
	{
		char o_i = '0' + d;

		write(1, &o_i, 1);
		count++;
	}
	else
		count = abd(d_d, count);
	return (count);
}
