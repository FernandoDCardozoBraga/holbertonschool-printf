#include "main.h"
/**
 * _putchar - writes the character to stdout
 * @c: The character to print
 * Return: 1 if success
 * * error : -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Function that print a string
 * @s: string to be printed
 * Return: numbers of characters printed
 */
int _puts(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count += _putchar(*s);
		s++;
	}
		return (count);
}

/**
 * convert - Function that converts number to base
 * @num: input number
 * @base: input base
 * Return: pointer to string
 */
char *convert(int num, int base)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}

/**
 * _pnum - Function to prints number
 * @num: number to be printed
 * Return: counter to print
 */
int _pnum(int num)
{
	int count = 0;
	char *s;

	if (num < 0)
	{
		num = -num;
		count += _putchar('-');
	}
	s = convert(num, 10);
	while (*s != '\0')
	{
		count += _putchar(*s);
		s++;
	}
	return (count);
}
