#include "main.h"
#include <stdio>
#include <stdlib>
/**
 * print_numbers - Entry point
 *
 * Description: prints the numbers, from 0 to 9
 *
 * @i: number being printed
 *
 * Return: numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;
	
	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar (i + '0');
	}
		_putchar ('\n');
}
