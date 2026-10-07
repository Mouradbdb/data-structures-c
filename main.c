#include <stdio.h>
#include "include/stack.h"

int main(void)
{
    Stack stack;

    stack_init(&stack, 5);

    stack_push(&stack, 10);
    stack_push(&stack, 20);
    stack_push(&stack, 30);

    printf("Top: %d\n", stack_peek(&stack));

    stack_pop(&stack);

    printf("Top after pop: %d\n", stack_peek(&stack));

    printf("Empty: %s\n",
           stack_is_empty(&stack) ? "yes" : "no");

    stack_pop(&stack);
    stack_pop(&stack);

    printf("Empty after removing everything: %s\n",
           stack_is_empty(&stack) ? "yes" : "no");

    stack_free(&stack);

    return 0;
}