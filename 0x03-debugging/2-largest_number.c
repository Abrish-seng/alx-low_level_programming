#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
<<<<<<< HEAD
int largest;
if (a >= b && a >= c)
{
largest = a;
}
else if (a  >= c && c >= b)
{
largest = a;
}
else if (b >= a && b >= c)
{
largest = b;
}
else if (b >= c && c >= a)
{
largest = b;
}
else if (c >= a && c >= b)
{
largest = c;
}
else if (c >= b && b >= a)
{
largest = c;
}
return (largest);
=======
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
>>>>>>> 206e3013f50ea97718dbe22dda3cb6e5eacff80a
}
