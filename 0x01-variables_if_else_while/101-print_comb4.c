#include<stdio.h>

/**
 * main - Prints all possible combination of three digits,
 * and numbers are printed in ascending order.
 * Return: Always 0.
*/
int main(void)
{
	int first_digit, second_digit, third_digit;

	for (first_digit = 0; first_digit <= 9; first_digit++)
	{
		for (second_digit = first_digit + 1; second_digit < 10; second_digit++)
		{
			for (third_digit = second_digit + 1; third_digit < 10; third_digit++)
			{
				putchar((first_digit % 10) + '0');
				putchar((second_digit % 10) + '0');
				putchar((third_digit % 10) + '0');

				if (first_digit == 7 && second_digit == 8 && third_digit == 9)
				{
					continue;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
