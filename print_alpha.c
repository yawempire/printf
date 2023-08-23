#include "main.h"

/**
 * print_string - loops through str and prints char
 * @l: va_list arg
 * @f: pointer to the struct flags
 * Return: number of char to be  printed
 */
int print_string(va_list l, flags_t *f)
{
	char *s = va_arg(l, char *);

		(void)f;

	if (!s)
	s = "(null)";
	return (_puts(s));
}

/**
 * print_char - print char
 * @l: va_list arg
 * @f: ptr to the struct flags
 * Return: number of char to be printed
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
		_putchar(va_arg(l, int));
	return (1);
}
