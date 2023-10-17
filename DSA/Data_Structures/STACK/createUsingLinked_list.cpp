#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *top = NULL;
void push(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));

    if (t == NULL)
        printf("stack is full\n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    struct Node *t;
    int x = -1;

    if (top == NULL)
        printf("Stack is Empty\n");
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        free(t);
    }
    return x;
}

void Display()
{
    Node *t = new Node;
    t = top;
    while (t != NULL)
    {
        printf("%d ", t->data);
        t = t->next;
    }
}

int main(int argc, char const *argv[])
{
    push(4);
    push(3);
    push(2);
    push(1);
    push(56);
    pop();
    Display();
    return 0;
}
