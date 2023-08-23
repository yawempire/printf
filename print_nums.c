#include "main.h"

/**
 * print_int - printing an integer
 * @l: va_list of arg
 * @f: ptr to the struct
 * Return: number of char to be printed
 */
int print_int(va_list l, flags_t *f)
{
	int n = va_arg(l, int);
	int res = count_digit(n);

if (f->space == 1 && f->plus == 0 && n >= 0)
	res += _putchar(' ');
if (f->plus == 1 && n >= 0)
	res += _putchar('+');
if (n <= 0)
	res++;
	print_number(n);
		return (res);
}

/**
 * print_unsigned - printing unsigned integer
 * @l: va_list of args
 * @f: ptr to the struct
 * Return: number of char printed
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
		return (_puts(str));
}

/**
 * print_number - helper function looping through
 * an int
 * @n: int to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
{
	_putchar('-');
	n1 = -n;
}
	else
	n1 = n;

		if (n1 / 10)
	print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - Returns the number of digits in an int
 * for _printf
 * @i: int to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

if (i < 0)
	u = i * -1;
else
	u = i;
	while (u != 0)
{
	u /= 10;
	d++;
}
	return (d);
}
