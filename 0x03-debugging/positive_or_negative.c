#include "main.h"

/**
  * positive_or_negative - check postive or negative number
  * Return: 0 (Sucess)
  */

void positive_or_negative(int i)

{
	if (i <= 0.0)
	{
		if (i == 0.0)
			printf("%d is zero", i);
		else
			printf("%d is negative", i);
	}
	else
		printf("%d is positive", i);

}
