#include "main.h"

/**
 * get_flag - on flags if _printf finds
 * a flag modifier
 * @s: char holding the flag specifier
 * @f: ptr to the struct flags
 *
 * Return: (1) if a flag has turned on, (0) if not
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
case '+':
	f->plus = 1;
	i = 1;
	break;
case ' ':
	f->space = 1;
	i = 1;
	break;
case '#':
	f->hash = 1;
	i = 1;
	break;
	}

	return (i);
}
