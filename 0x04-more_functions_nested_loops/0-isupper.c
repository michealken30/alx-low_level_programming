#include "main.h"

/**
 * _isupper - uppercase letters
 * @x: The numbed to be checked
 *
 * Return: 0 or 1
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 98)
		return (1);
	else
		return (0);
}
