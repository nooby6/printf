#include <limits.h>
#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int chars_printed;
	/*Call _printf to get the count of characters printed*/
	chars_printed = _printf("Code for Samuel and Whrite printf project.");
	/*Print the count using printf*/
	printf("Total characters printed: %d\n", chars_printed);
	printf("%c\n", 'P');/*Print character P using %c*/
	printf("%s\n", "group_project");/*Print a string using %s*/
	return (0);
}
