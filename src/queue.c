#include <stdlib.h>
#include "../include/queue.h"

void queue_init(Queue *queue, int max_size)
{
    queue->current_size = 0;
    queue->max_size = max_size;
    queue->element = malloc(max_size * sizeof(int));
}

void queue_free(Queue *queue)
{
    free(queue->element);
}

void queue_enqueue(Queue *queue, int value)
{
    queue->current_size++;
    queue->element[queue->current_size - 1] = value;
}

void queue_dequeue(Queue *queue)
{
    for (int i = 0; i < queue->current_size - 1; i++)
    {
        queue->element[i] = queue->element[i + 1];
    }
    queue->current_size--;
}

int queue_peek(Queue *queue)
{
    return queue->element[0];
}

bool queue_is_empty(Queue *queue)
{
    return queue->current_size == 0;
}
