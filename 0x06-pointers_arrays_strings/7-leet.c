#include "holberton.h"

/**
 **leet - encode a string.
 *@s: s
 * Return: Always 0.
 */
char *leet(char *s)
{
int i = 0;

while (s[i] != '0')
{
while (s[i] == 'a' || s[i] == 'A')
	s[i] = '4';
while (s[i] == 'e' || s[i] == 'E')
	s[i] = '3';
while (s[i] == 'o' || s[i] == 'O')
	s[i] = '0';
while (s[i] == 't' || s[i] == 'T')
	s[i] = '7';
while (s[i] == 'l' || s[i] == 'L')
	s[i] = '1';
i++;
}
return (s);
}
