#include <stdio.h>
#include "include/queue.h"

int main(void)
{
    Queue queue;

    queue_init(&queue, 5);

    printf("Empty: %s\n",
           queue_is_empty(&queue) ? "yes" : "no");

    queue_enqueue(&queue, 10);
    queue_enqueue(&queue, 20);
    queue_enqueue(&queue, 30);

    printf("Front: %d\n", queue_peek(&queue));

    queue_dequeue(&queue);

    printf("Front after dequeue: %d\n", queue_peek(&queue));

    queue_enqueue(&queue, 40);
    queue_enqueue(&queue, 50);

    printf("Front: %d\n", queue_peek(&queue));

    queue_dequeue(&queue);
    queue_dequeue(&queue);

    printf("Front after two more dequeues: %d\n", queue_peek(&queue));

    queue_free(&queue);

    return 0;
}