#ifndef QUEUE_H
#define QUEUE_H
#include <stdbool.h>

typedef struct
{
    int max_size;
    int current_size;
    int *element;
} Queue;

void queue_init(Queue *queue, int max_size);
void queue_free(Queue *queue);

void queue_enqueue(Queue *queue, int value);
void queue_dequeue(Queue *queue);
int queue_peek(Queue *queue);

bool queue_is_empty(Queue *queue);
#endif