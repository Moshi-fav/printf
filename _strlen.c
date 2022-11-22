#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: pointer to string
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
