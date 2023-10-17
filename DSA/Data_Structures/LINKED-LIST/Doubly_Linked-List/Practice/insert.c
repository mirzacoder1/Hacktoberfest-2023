#include <stdio.h>
#include <stdlib.h>
#include "doubleLinked_list.h"
void Insert(struct Node *p, int index, int value)
{
    int i = 0;
    struct Node *q = NULL;
    temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = value;
    if (index < 0 || index > count(p) + 1)
        return;
    if (index == 0)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->next = Head;
        Head->prev = temp;
        temp->prev = NULL;
        Head = temp;
    }
    else if (index < count(p))
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        q = p->next;
        p->next = temp;
        temp->prev = p;
        temp->next = q;
        q->prev = temp;
    }
    else
    {
        temp->prev = last;
        last->next = temp;
        temp->next = NULL;
        last = temp;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 65};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    doubleDisplay(Head);
    Insert(Head, 0, 12);
    doubleDisplay(Head);
    Insert(Head, 9, 13);
    doubleDisplay(Head);
    return 0;
}