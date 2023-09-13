#include "main.h"

/**
 * _isalpha - checks if input is an alphabet
 * @c: input
 *
 * Return: 1(if it is an alphabet) 0(otherwise)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
