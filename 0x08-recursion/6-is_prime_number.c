#include "holberton.h"
int _prime(int n, int i);
/**
* is_prime_number - checks for prime
* @n: is the number to be checked
*
* Return: returns the function, recursively
*/
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
/**
* _prime - checks the prime
* @n: is an int
* @i: is an int
* Return: returns the function
*/
int _prime(int n, int i)
{
	if (n <= 2)
		return (0);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (_prime(n, i + 1));
}
