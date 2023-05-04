#include "main.h"

/**
  * clear_bit - set  value of a bit to zero at a given index
  * @n: unsigned long to change
  * @index: index to change to 0
  * Return: if it worked 1or if  error -1
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int mask;

	if (index > 79 || !n)
		return (-1);
	mask = 1 << index;
	*n = (*n & ~mask) | ((0 << index) & mask);
	return (1);
}

