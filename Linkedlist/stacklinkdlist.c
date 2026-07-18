#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;


void push(int x)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Stack Overflow\n");
        return;
    }

    newNode->data = x;
    newNode->next = top;
    top = newNode;
}

void pop()
{
    struct Node *temp;

    if (top == NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Deleted element: %d\n", top->data);
    top = top->next;
    free(temp);
}

void display()
{
    struct Node *temp = top;

    if (top == NULL)
    {
        printf("Stack is Empty\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(5);
    push(4);
    push(3);

    printf("Stack elements:\n");
    display();

    pop();

    printf("\nAfter Pop:\n");
    display();

    return 0;
}
