#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print alphabet in lower and uppercase
 *
 * Return: (0) Success
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{

		putchar(ch);

	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{

		putchar(ch);

	}

	putchar('\n');

	return (0);
}
