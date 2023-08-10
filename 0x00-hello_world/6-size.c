#include <stdio.h>
/*
 * main with the point of line to install packages
 * Return:0
 */
int main(void)
{       
        char a;
        int b;
        long int c;
        long long int d;
        float f;
        pritntf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(a));
        pritntf("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(b));
        pritntf("Size of a int long: %lu byte(s)\n",(unsigned long)sizeof(c));
        pritntf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(d));
        pritntf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
        return (0);
}
