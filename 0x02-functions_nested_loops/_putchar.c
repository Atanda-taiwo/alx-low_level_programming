#include <unistd.h>
/**
 * _putchar - write standard input and output
 * Return : zero
 * @t: print value of c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
