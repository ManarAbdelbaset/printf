#include <unistd.h>
#include "main.h"
/**
 * abd - entry code
 * @d_d: input
 * @man: input
 * Return: int
 */
int abd(long int d_d, int man)
{
	int count = 0;
	long int d = d_d;

	if (d_d < 0)
	{
		char o_i = '-';

		d_d = -d_d;
		write(1, &o_i, 1);
		man++;
		man = abd(d_d, man);
		return (man);
	}
	while (d_d > 0)
	{
		d_d /= 10;
		count++;
	}
	while (count)
	{
		int i = 0;
		long int pw = 1;
		int o_o;
		char o_i;

		for (i = 1; i < count; i++)
			pw *= 10;
		o_o = d / pw;
		d = d - (o_o * pw);
		o_i = '0' + o_o;

		write(1, &o_i, 1);
		man++;
		count--;
	}
	return (man);
}
