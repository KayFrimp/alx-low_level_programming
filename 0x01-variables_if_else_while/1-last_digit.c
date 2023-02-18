#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d ", n);
	if (last_digit > 5)
	printf("is %d and is greater than 5\n", last_digit);
	if (last_digit == 0)
	printf("is %d and is 0\n", last_digit);
	if (last_digit != 0 && last_digit < 6)
	printf("is %d and is less than 6 and not 0\n", last_digit);
	return (0);
}
