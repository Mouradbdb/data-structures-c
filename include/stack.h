#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

typedef struct
{
    int max_size;
    int current_size;
    int *element;
} Stack;

void stack_init(Stack *stack , int max_size);
void stack_free(Stack *stack);

void stack_push(Stack *stack, int value);
int stack_peek(Stack *stack);
void stack_pop(Stack *stack);

bool stack_is_empty(Stack *stack);
#endif