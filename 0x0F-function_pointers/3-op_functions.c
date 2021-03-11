#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - Returns the sum of two ints
* @a: first int
* @b: second int
* Return: returns the sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - returns the diff of two ints
* @a: first int
* @b: second int
* Return: returns the diff
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - returns product of two ints
* @a: first int
* @b: second int
* Return: returns the product
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - returns divis of two ints
* @a: first int
* @b: second int
* Return: returns the division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
* op_mod - returns remainder of two ints
* @a: first int
* @b: second int
* Return: returns the remainder
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}

