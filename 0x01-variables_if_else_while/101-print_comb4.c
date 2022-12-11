#include <stdio.h>

/**
   * main - Prints all possible combinations of three different digits
   * Return: Always 0 (Success)
   */

int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)												{																				putchar((digit1 % 10) + '0');
									putchar((digit2 % 10) + '0');
									putchar((digit3 % 10) + '0');																												if (digit1 == 7 && digit2 == 8 && digit3 == 9)																													continue;
																																								putchar(',');
																																								putchar(' ');							}
																	}
									}

				putchar('\n');

					return (0);
}

