#include "main.h"

/**
  * print_alphabet_x10 - used to print the lowercase followed by new line 10x
  */

void print_alphabet_x10(void)
{
	char alphabet;
	int loop = 0;

	while (loop++ <= 9)
	{

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
	}
}
