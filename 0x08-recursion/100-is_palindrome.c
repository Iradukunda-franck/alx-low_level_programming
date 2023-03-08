#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: string to get length of
 *
 * Return: length of s
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_helper - checks if a string is a palindrome
 *
 * @s: string to check
 * @start: starting index of s
 * @end: ending index of s
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int len = _strlen(s);
return (is_palindrome_helper(s, 0, len - 1));
}
