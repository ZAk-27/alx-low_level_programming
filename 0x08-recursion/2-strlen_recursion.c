#include "main.h"

/**
 * _strlen_recursion - get length of s.tring
 * @s: pointer to a SString
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

