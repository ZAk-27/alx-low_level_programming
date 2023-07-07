#include "main.h"

/**
  * flip_bits - count bits you need to flip to get from a number to another
  * @n: 1st numb
  * @m: 2nd numb
  * Return: numb of flips to get from one numb to the other
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, check;

	check = (n ^ m);
	while (check)
	{
		count += (check & 1);
		check >>= 1;
	}
	return (count);

}
