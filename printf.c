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
    int i, j;
    char *str;

    va_start(args, format);

    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
                break;
            if (format[i] == 'c')
            {
                char c = va_arg(args, int);
                printed_chars += write(1, &c, 1);
            }
            else if (format[i] == 's')
            {
                str = va_arg(args, char *);
                if (!str)
                    str = "(null)";
                for (j = 0; str[j]; j++)
                {
                    printed_chars += write(1, &str[j], 1);
                }
            }
            else if (format[i] == '%')
            {
                printed_chars += write(1, "%", 1);
            }
            else
            {
                printed_chars += write(1, "%", 1);
                printed_chars += write(1, &format[i], 1);
            }
        }
        else
        {
            printed_chars += write(1, &format[i], 1);
        }
    }

    va_end(args);
    return printed_chars;
}
