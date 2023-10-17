#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: The format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;
    int i = 0;

    va_start(args, format);

    while (format && format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
                break;
            if (format[i] == 'c')
            {
                char c = va_arg(args, int);
                printed_chars += _putchar(c);
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(args, char *);
                if (!str)
                    str = "(null)";
                int j = 0;
                while (str[j])
                {
                    printed_chars += _putchar(str[j]);
                    j++;
                }
            }
            else if (format[i] == '%')
            {
                printed_chars += _putchar('%');
            }
            else
            {
                printed_chars += _putchar('%');
                printed_chars += _putchar(format[i]);
            }
        }
        else
        {
            printed_chars += _putchar(format[i]);
        }
        i++;
    }

    va_end(args);
    return printed_chars;
}

/**
 * _putchar - Write a character to standard output
 * @c: The character to print
 *
 * Return: The number of characters printed
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
