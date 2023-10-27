// QUEUE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;
int isEmpty()
{
    return front == -1;
}
int isFull()
{
    return rear == MAX_SIZE - 1;
}
void enQueue(int val)
{
    if (isFull())
    {
        printf("\nQueue is Full....");
        return;
    }
    if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = val;
    printf("\n%d value inserted in Queue...", val);
}
void deQueue()
{
    if (isEmpty())
    {
        printf("\nQueue is Empty.. can not perform Delete operation");
        return;
    }
    printf("\nElement %d deleted from queue", queue[front]);
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}
void display()
{
    if (isEmpty())
    {
        printf("\nQueue is Empty....");
        return;
    }
    printf("\nQueue Element\n");
    for (int i = front; i <= rear; i++)
    {
        printf("%d\t", queue[i]);
    }
}
int main()
{
    enQueue(5);
    enQueue(6);
    enQueue(7);
    enQueue(8);
    display();
    deQueue();
    display();
    return 0;
}