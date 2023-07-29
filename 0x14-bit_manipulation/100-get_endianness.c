#include "main.h"

/**
 * get_endianness - to b  checkdwn a machine is little or big endian
 * Return: 0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
