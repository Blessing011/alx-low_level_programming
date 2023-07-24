#include "main.h"
/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int z = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for (; z < 1 ; z++)
	{
		dest[z] = src[z];
	}
	dest[1] = '\0';
	return (dest);
}
