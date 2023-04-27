#include <stdio.h>

void printbeforemain(void) __attribute__ ((constructor));
/**
 * printbeforemain zz - prints before main is executed
 */
void printbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

