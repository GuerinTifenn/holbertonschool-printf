#include "main.h"
/**
 * print_char - Prints a character
 * @args: The va_list containing the argument
 * Return: the number of characters printed
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_string - Prints a string
 * @args: The va_list containing the argument
 * Return: the number of characters printed
 */

int print_string(va_list args)
{
	int i = 0;
	char *str;

	str = va_arg(args, char *);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_percent - Prints a percentage
 * @args: The va_list containing the argument
 * Return: the number of characters printed
 */

int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
		return (1);
}

/**
  * print_integer - print an interger
  *@args: The va_list containing the argument
  *Return: the number of charaters printed
  */

int print_integer(va_list args)
{
	int num = va_arg(args, int);
	int reversed_num, digit;
	int count = 0;

	if (num < INT_MIN || num > INT_MAX || args == NULL)
	{
		return (-1);
	}

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	reversed_num = 0;
	while (num > 0)
	{
		reversed_num = reversed_num * 10 + num % 10;
		num /= 10;
	}
	while (reversed_num > 0)
	{
		digit = reversed_num % 10;
		_putchar(digit + '0');
		count++;
		reversed_num /= 10;
	}
		return (count);
}
