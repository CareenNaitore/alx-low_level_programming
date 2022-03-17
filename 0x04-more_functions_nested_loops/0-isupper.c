#include "main.h"
#include <stdio.h>

/*
 *
 *
 *
 * file 0 is used to check if c is capial
 * @c: The character to be checked.
 *
 *
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
