include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The char to print
 *
 * Return: On success 1.
 * if  error, -1 is returned er is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
