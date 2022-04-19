#include "main.h"

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
    static char *rep = "0123456789abcdef";
    static char buffer[50];
    char sign = 0;
    char *ptr;
    unsigned long n = num;

    if (num < 0)
    {
            n = -num;
            sign = '-';
    }
    
    ptr = &buffer[49];
    *ptr = '\0';
    do
    {
        *--ptr = rep[n % base];
        n /= base;
    } while (n != 0);

    if (sign)
            *--ptr = sign;
    return (ptr);
}
