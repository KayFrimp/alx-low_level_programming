#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(str, 1, 59, stderr);
return (1);
}
