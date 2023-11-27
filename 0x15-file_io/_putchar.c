#include "main.h"
#include <unistd.h>

/**
 * _putcahr - writes the character c
 * @c: the character
 * return: on success 1
 *
 */
int _putchar(char c)
{
	return (write(1,&c,1));
}
