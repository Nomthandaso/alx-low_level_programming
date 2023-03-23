#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - calculates sum of two numbers
 * @a: value to add
 * @b: value to add
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculates difference between two numbers
 * @a: value 1
 * @b: value 2
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: value 1
 * @b: value 2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: value 1
 * @b: value 2
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulus operandi
 * @a: value 1
 * @b: value 2
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
