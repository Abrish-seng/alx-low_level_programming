#include "main.h"
/**
*print_numbers - function that print all numbers from
*0 to 9
*
*Return: returns nothing
*/
void print_numbers(void)
{
int number = 0;
for (number = 0; number < 10; number++)
{
_putchar(number);
}
_putchar('\n');
}
