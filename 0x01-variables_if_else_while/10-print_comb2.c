#include <stdio.h>

/**
 * main - starts the program
 *
 * Return: returns 0
 */

int main(void)
{

    for (int i = 0; i < 100; i++)
    {
        putchar((i / 10) + '0');
        putchar((i % 10) + '0');
    }
    putchar('\n');
    return (0);
}
