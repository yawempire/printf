#include "main.h"

/**
  * print_char - print a char
  * @c: Argument
  *
  * Return: (1) for each char
  */
int print_char(char c)
{
	write(1, &c, 1);
	return (1);
}
/**
  * handle_c - stdout handling test c
  * @args: variadic functions argument
  *
  * Return: (0) Success
  */

int handle_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (print_char(c));
}
/**
  * handle_s - stdout handling test s
  * @args: variadic functions argument
  *
  * Return: (0) Success
  */

int handle_s(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		return (print_string("(null)"));
	else
		return (print_string(str));
}
/**
  * print_string - stdout the str passed
  * @str: ptr to the str
  *
  * Return: number of character
  */

int print_string(char *str)
{
	int count;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		count = strlen(str);
		write(1, str, count);
		return (count);
	}
}
