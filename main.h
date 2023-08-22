#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);

/* HELPER FUNCTIONS */
int print_char(char c);
int handle_c(va_list args);
int handle_s(va_list args);
int print_string(char *str);
#endif
