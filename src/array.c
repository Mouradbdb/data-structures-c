#include <stdlib.h>
#include "../include/array.h"

void array_init(Array *array, int capacity)
{
    array->size = 0;
    array->capacity = capacity;
    array->element = malloc(capacity * sizeof(int));
}

void array_free(Array *array)
{
    free(array->element);
}

int array_get(Array *array, int index)
{
    return array->element[index];
}

void array_set(Array *array, int index, int value)
{
    array->element[index] = value;
}

void array_insert(Array *array, int index, int value)
{
    for (int i = array->size; i > index; i--)
    {
        array->element[i] = array->element[i - 1];
    }
    array->element[index] = value;
    array->size++;
}

void array_delete(Array *array, int index)
{
    for (int i = index; i < array->size - 1; i++)
    {
        array->element[i] = array->element[i + 1];
    }
    array->size--;
}
int array_size(Array *array){
    return array->size;
}

bool array_is_empty(Array *array){
    return array->size == 0;
}
