#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		/*{"r", print_reversed},*/
		/*{"R", rot13},*/
		/*{"u", unsigned_integer},*/
		/*{"o", print_octal},*/
		/*{"x", print_hex},*/
		/*{"X", print_heX},*/
		{NULL, NULL}
	};
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);
	/*Calling parser function*/
	printed_chars = parser(format, f_list, list);

	va_end(list);

	return (printed_chars);
}
