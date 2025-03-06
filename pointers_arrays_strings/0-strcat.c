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
	char *ptr = dest;

	/* Move the pointer to the end of dest */
	while (*ptr != '\0')
		ptr++;

	/* Append src to dest */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	/* Add null terminator */
	*ptr = '\0';

	return (dest);
}
