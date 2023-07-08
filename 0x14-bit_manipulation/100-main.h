#include "main.h"

/**
 * get_endianness - function
 * Return: Always 0.
 */

int get_endianness(void)
{
	int k = 1;

	if (*(char *)&k)
		return (1);
	return (0);
}
