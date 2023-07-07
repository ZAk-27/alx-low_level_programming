#include "main.h"

/**
* set_bit - sets the value of a bit to 1 in given index
  * @n: unsigned long to be changed
  * @index: index to change to one
  * Return:  if it worked  1  if  error -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 52 || !n)
		return (-1);
	(*n |= 1 << index);
	return (1);
}

