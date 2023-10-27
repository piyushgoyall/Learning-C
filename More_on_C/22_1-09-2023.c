/*
Circular queue is data structure similar to regular queue but with fixed size.
It overcomes one of the limitation of standard queue.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 5

struct CircularQueue
{
    int items[MAX_SIZE];
    int front, rear;
};
bool isEmpty(struct CircularQueue *q)
{
    return (q->front == -1 && q->rear == -1);
}
bool isFull(struct CircularQueue *q)
{
    return ((q->rear + 1) % MAX_SIZE == q->front);
}
void eQueue(struct CircularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("Queue is Full.... can't enter val");
        return;
    }
    if (isEmpty(q))
    {
        q->front = 0;
        q->rear = 0;
    }
    else
    {
        q->rear = (q->rear + 1) % MAX_SIZE;
    }
    q->items[q->rear] = val;
}
int dQueue(struct CircularQueue *q)
{
    int val;
    if (isEmpty(q))
    {
        printf("Queue is Empty.... can't delete\n");
        return -1;
    }
    val = q->items[q->front];
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % MAX_SIZE;
    }
    return val;
}
int main()
{
    struct CircularQueue q;
    q.front = q.rear = -1;
    eQueue(&q, 1);
    eQueue(&q, 2);
    eQueue(&q, 3);
    printf("Delete val: %d\n", dQueue(&q));
    printf("Delete val: %d", dQueue(&q));
    eQueue(&q, 4);
    eQueue(&q, 5);
    return 0;
}