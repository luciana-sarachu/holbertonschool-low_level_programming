#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concanate strings.
 * @s1: s1
 * @s2: s2
 * @n: n
* Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, jj, i, ii;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (j = 0; s1[j] != '\0'; j++)
	{
	}
	for (jj = 0; s2[jj] != '\0'; jj++)
	{
		if (n >= jj)
		{
			p = malloc((j + jj) * sizeof(char) + 1);
		}
		else
			p = malloc((j + n) * sizeof(char) + 1);
	if (p == NULL)
	{
		return (0);

	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (ii = 0; s2[ii] != '\0'; ii++)
	{
		if (n < ii)
		{
			break;
		}
		p[i + ii] = s2[ii];
	}
	}
	return (p);
}
