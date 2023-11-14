#include <unistd.h>
/**
 * soufian_s - %
 * @count: input
 * Return: int
 */
int soufian_s(int count)
{
	char c = '%';

	write(1, &c, 1);
	count++;
	return (count);
}
