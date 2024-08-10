#ifndef MAIN_H
#define MAIN_H

/* ↓ LIBRARIES ↓ */
#include <stdio.h>
/* ------------------- */

/* ↓ STRUCTS AND MISC ↓ */

/* ------------------- */

/* ↓ FUNCTIONS ↓ */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_search(const int *array, size_t i, size_t size);
/* ------------------- */

#endif /* MAIN_H */
