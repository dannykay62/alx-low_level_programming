#include "daniel.h"
#include <stdio.h>

int _strLen_recursion(char *s);
int helper_palindrome(char *s, int len);

/**
 * _strlen_recursion - function obtain the lenngth of string s
 * @s: string used to calculate lentgh
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return ((_strlen_recursion(s + 1)) + 1);
}

/**
 * is_palindrome - function checks if s is a palindrome
 * @s: intput string
 * Return: if string is palindrome returns 1 or 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (helper_palindrome(s, len));
}

/**
 * helper_palindrome - function reverse a string
 * @s: input string
 * @len: length of string s
 * Return: reversed string
 */

int helper_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (helper_palindrome(s + 1, len - 2));
	}
	else
		return (0);
}
