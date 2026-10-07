#include <stdlib.h>
#include "../include/stack.h"

void stack_init(Stack *stack, int max_size)
{
    stack->current_size = 0;
    stack->max_size = max_size;
    stack->element = malloc(max_size * sizeof(int));
}

void stack_free(Stack *stack)
{
    free(stack->element);
}

void stack_push(Stack *stack, int value)
{
    stack->current_size++;
    stack->element[stack->current_size - 1] = value;
}

int stack_peek(Stack *stack)
{
    return stack->element[stack->current_size - 1];
}

void stack_pop(Stack *stack)
{
    stack->current_size--;
}

bool stack_is_empty(Stack *stack)
{
    return stack->current_size == 0;
}
