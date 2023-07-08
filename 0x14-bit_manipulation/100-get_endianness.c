#include "main.h"

/**
 * get_endianness - to b  checkdwn a machine is little or big endian
 * Return: 0 for big, 1 for little*/


int get_endianness(void)
{
	int k = 1;

	if (*(char *)&k)
		return (1);
	return (0);
}
