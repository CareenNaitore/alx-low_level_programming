#include "main.h"
/*
 *
 *
 *
 * file 0 is used to check if c is capial
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
