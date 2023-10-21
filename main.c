#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    unsigned int ui;
    void *addr;
    {   
    len = _printf("Audrine and Samuel custom printf!\n");
    printf("Length: [%dd]\n", len);
    return (0);
    }
    ui = (unsigned int)1024;
    addr = (void *)0x7ffe637541f0;

    _printf("Length:[%d]\n", len);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "This is a test string.");
    _printf("Address:[%p]\n", addr);
    _printf("Percent:[%%]\n");

    return (0);
}
