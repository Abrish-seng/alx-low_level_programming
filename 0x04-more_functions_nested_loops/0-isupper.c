#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
    char c;
    if(c>='A' && c<='Z'){
	    return (1);
    }
    else
	    return (0);
    _putchar("\n");
}