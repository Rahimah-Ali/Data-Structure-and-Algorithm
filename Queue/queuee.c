#include <stdio.h>

#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (rear == N - 1)
    {
        printf("Queue Overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue Underflow\n");
    }
    else if (front == rear)
    {
        printf("Deleted Element = %d\n", queue[front]);
        front = rear = -1;
    }
    else
    {
        printf("Deleted Element = %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;

    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue: ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Front Element = %d\n", queue[front]);
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);

    display();

    peek();

    dequeue();

    peek();

    display();

    return 0;
}

