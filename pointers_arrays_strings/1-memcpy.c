#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: pointer to a char.
 * @src: pointer to a char.
 * @n: unsigned int.
 * Return: s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
