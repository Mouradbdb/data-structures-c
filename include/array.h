#ifndef ARRAY_H
#define ARRAY_H
#include <stdbool.h>

typedef struct
{
    int size;
    int capacity;
    int *element;
} Array;

void array_init(Array *array, int capacity);
void array_free(Array *array);
int array_get(Array *array, int index);
void array_set(Array *array, int index, int value);
void array_insert(Array *array, int index, int value);
void array_delete(Array *array, int index);
int array_size(Array *array);
bool array_is_empty(Array *array);

#endif