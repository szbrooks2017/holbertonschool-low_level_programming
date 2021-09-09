#ifndef SEARCH_H
#define SEARCH_H
#include <stdio.h>
#include <stdlib.h>

/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int start, int size);
#endif