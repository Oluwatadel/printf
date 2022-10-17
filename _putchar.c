#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @chr: character to display
 *
 * Return: On success 1.On error, -1 is returned
 */
int _putchar(char chr)
{
	return (write(1, &chr, 1));
}
