#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: string to be printed
 */
void print_rev(char *s)
{
    int len = 0;
    int i;
    
    /* Calculate string length */
    while (s[len] != '\0')
        len++;
    
    /* Print characters in reverse */
    for (i = len - 1; i >= 0; i--)
        _putchar(s[i]);
    
    /* Print newline */
    _putchar('\n');
}
