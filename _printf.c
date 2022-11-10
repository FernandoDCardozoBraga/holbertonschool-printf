#include "main.h"
/**
 *  _printf - Prints output according to format
 *  @format: char string
 *  Return: num of char printed
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			counter += _putchar(*format);
			format++;
			continue;
		}
		format++;
		switch (*format)
		{
			case 'c':
				counter += _putchar(va_arg(args, int));
				break;
			case 's':
				counter += _puts(va_arg(args, char*));
				break;
			case '%':
				counter += _putchar(*format);
				break;
			case 'd':
			case 'i':
				counter += _pnum(va_arg(args, int));
				break;
			default:
				while (*format != '%')
					format--;
				counter += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (counter);
}
