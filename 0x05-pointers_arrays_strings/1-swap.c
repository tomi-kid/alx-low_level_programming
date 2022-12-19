#include "main.h"

/**
 *swap_int - used to swap from var a to b
 *@swap - holds the swap value
 *@a: holdes the first value
 *@b: holdes the second value
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
