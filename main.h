#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
char *convert(int num, int base);
int _pnum(int num);

#endif
