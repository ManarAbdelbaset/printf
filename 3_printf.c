#include <unistd.h>
#include <stdarg.h>
/**
* manr_st - Entry code
* @args: input
* @count: input
* Return: int
*/
int manr_st(va_list args, int count)
{
	char *c = va_arg(args, char *);

	while (*c != '\0')
	{
	write(1, c, 1);
	count++;
	c++;
	}
	return (count);
}
