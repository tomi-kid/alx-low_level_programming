#include "main.h"

/**
  * print_alphabet - used to print the lowercase followed by new line 10x
  */

void print_alphabet(void)
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
