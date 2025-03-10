#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n) {
    unsigned int i;
    for (i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}

int main() {
    char buffer[10];
    
    _memset(buffer, 'A', sizeof(buffer));

    for (int i = 0; i < 10; i++) {
        printf("%c ", buffer[i]);
    }
    
    return 0;
}
