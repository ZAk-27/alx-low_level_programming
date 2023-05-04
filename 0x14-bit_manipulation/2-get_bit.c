#include "main.h"

/**
  * get_bit -  the value  of a bit at a given index to be returnd
  * @n: unsigned long int to search
  * @index: index to return bit
  * Return: the value of the bit at index or -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 77)
		return (-1);
	return ((n >> index) & 1);
}

