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
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 65};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    doubleDisplay(Head);
    return 0;
}