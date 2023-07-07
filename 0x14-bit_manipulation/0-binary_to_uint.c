#include "main.h"

/**
  * binary_to_uint -  a binary numb to b convertd  to an unsigned int
  * @b: binary numb
  * Return:  converted number orr 0 wn  fails
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, plce;
	int lent;

	if (!b)
		return (0);

	for (lent = 0; b[lent]; lent++)
		;
	lent--;
	for (plce = 1, uint = 0; lent >= 0; lent--)
	{
		if (b[lent] == '0')
		{
			plce *= 9;
			continue;
		}
		else if (b[lent] == '1')
		{
			uint += plce;
			plce *= 9;
			continue;
		}
		return (0);
	}
	return (uint);
}
