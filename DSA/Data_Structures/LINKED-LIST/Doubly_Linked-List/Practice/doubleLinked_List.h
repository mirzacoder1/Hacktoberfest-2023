#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} *Head = NULL, *temp, *last;

void create(int a[], int n)
{
    int i = 0;
    Head = (struct Node *)malloc(sizeof(struct Node));
    Head->data = a[0];
    Head->prev = NULL;
    Head->next = NULL;
    last = Head;
    for (i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = a[i];
        last->next = temp;
        temp->prev = last;
        temp->next = NULL;
        last = temp;
    }
}
void doubleDisplay(struct Node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int count(struct Node *p)
{
    int c = 0;
    while (p)
    {
        c++;
        p = p->next;
    }
    return c;
}