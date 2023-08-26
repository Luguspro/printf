#include "main.h"

/**
* is_printable - function to evaluate if char is printable
* @c: Char to be evaluated
*
* Return: 1 if c is printable and 0 otherwise
*/

int is_printable(char c)
{
if (c >= 32 && c < 127)
	return (1);
return (0);
}

/**
* append_hexa_code - Append ascci in hexadecimal code to buffer
* @buffer: Array of chars
* @i: Index at which to start appending.
* @ascii_code: ASSCI CODE
*
* Return: Always 3(success)
*/

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

/* The hexa Code Format takes on 2 digits long always*/
if (ascii_code < 0)
ascii_code *= -1;
buffer[i++] = '\\';
buffer[i++] = 'x';
buffer[i++] = map_to[ascii_code / 16];
buffer[i] = map_to[ascii_code % 16];
return (3);
}

/**
* is_digit - function that verifies if a char is a digit
* @c: Char to be evaluated
*
* Return: 1 if c is a digit and 0 otherwise
*/

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
* convert_size_number - function thah cast a number to specified size
* @num: Number to be casted
* @size: Number indicating the type to be casted.
*
* Return: num casted value
*/

long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);
	return ((int)num);
}

/**
* convert_size_unsgnd - function Cast a number to specified size
* @num: Number to be casted
* @size: Number indicating the type to be casted
*
* Return: num casted value
*/

long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);
	return ((unsigned int)num);
}
