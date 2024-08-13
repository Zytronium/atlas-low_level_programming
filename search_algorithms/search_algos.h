#ifndef MAIN_H
#define MAIN_H

/* ↓ LIBRARIES ↓ */
#include <stdio.h>
/* ------------------- */

/* ↓ FUNCTIONS ↓ */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_search(const int *array, size_t min, size_t max);
void iterate_down(const int *array, size_t range, size_t min, size_t *i, size_t *max);
void iterate_up(const int *array, size_t range, size_t max, size_t *i, size_t *min);
/* ------------------- */

#endif /* MAIN_H */
