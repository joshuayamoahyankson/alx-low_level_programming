#include "main.h"
/**
 * main - Entry point
 * Description: Write a program that prints _putchar
 * Return: Always 0
 */
int main(void)
{
	char *some_text = "_putchar\n";

	while (*some_text)
	{
		_putchar(*some_text);
		some_text++;
	}
	return (0);
}
