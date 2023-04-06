#include "main.h"

int try_now(char *s, int j, int feet);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (try_now(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * try_now - checks the characters recursively for palindrome
 * @s: string to check
 * @j: iterator
 * @feet: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int try_now(char *s, int j, int feet)
{
	if (*(s + j) != *(s + feet - 1))
		return (0);
	if (j >= feet)
		return (1);
	return (try_now(s, j + 1, feet - 1));
}

