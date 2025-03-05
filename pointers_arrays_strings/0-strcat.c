#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src to the string
 *           pointed to by @dest.
 * @dest: A pointer to the destination string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0, i = 0;

    // Find the length of dest
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    // Append src to the end of dest
    while (src[i] != '\0')
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    // Add the null terminator
    dest[dest_len] = '\0';

    return dest;
}

