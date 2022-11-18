#include "shell.h"

char *_strchr(char *s, char c);
int _strspn(char *s, char *accept);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, size_t n);

/**
 * _strchar - locates a character in a string
 * @s: the string to be searched
 * @c: teh character to be located
 *
 * Return: if c is found a pointer to first find NULL if not found
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index]; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return (NULL);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the prefix to be measured
 *
 * Return: the number of bytes in s
 */

int _strspn(char *s, char *accept)
{
	int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
		}
		s++;
	}
	return (bytes);
}

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: + byte difference if s1>s2 - byte difference if s1<s2 or 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);

	return (0);
}

/**
 * _strncmp - compare two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * @n: first n bytes of string to compare
 *
 * Return: less than 0 if s1<s2, 0 if s1 match s2 or greater 0 if s1>s2
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	if (i == n)
		return (0);
	else
		return (-15);
}
