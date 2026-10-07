#include <stdio.h>
#include "include/array.h"

int main(void)
{
    Array array;

    array_init(&array, 10);

    array_insert(&array, 0, 10);
    array_insert(&array, 1, 20);
    array_insert(&array, 2, 30);

    printf("Size: %d\n", array_size(&array));

    for (int i = 0; i < array_size(&array); i++)
    {
        printf("%d ", array_get(&array, i));
    }

    printf("\n");

    array_insert(&array, 1, 99);

    printf("After insertion: ");
    for (int i = 0; i < array_size(&array); i++)
    {
        printf("%d ", array_get(&array, i));
    }

    printf("\n");

    array_delete(&array, 2);

    printf("After deletion: ");
    for (int i = 0; i < array_size(&array); i++)
    {
        printf("%d ", array_get(&array, i));
    }

    printf("\n");

    array_free(&array);

    return 0;
}