#include "main.h"

/************************* PRINT CHAR *************************/

/*
 * print_char - Prints a char
 * @types: List of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size specifer
 * Return: Number of chars printed
 */

int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)

