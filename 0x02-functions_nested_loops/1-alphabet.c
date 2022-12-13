#include "main.h"

/**
  * print_alphabet - used to print the lowercase followed by new line
  */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
}
