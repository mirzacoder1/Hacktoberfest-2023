#include <stdio.h>
#include <stdlib.h>
#include "doubleLinked_list.h"
void Delete(struct Node *p, int index)
{
    int i = 0;
    int x;
    struct Node *q = NULL;
    if (index < 0 || index > count(p) + 1)
        return;
    if (index == 0)
    {
        Head = Head->next;
        if (Head)
            Head->prev = NULL;

        free(q);
    }
    else if (index > count(p))
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        q->next->prev = p;
        x = q->data;
        free(q);
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        q = p->next;
        q->prev = p->next = NULL;

        x = q->data;
        free(q);
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 65};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    doubleDisplay(Head);
    for (int i = 1; i < size; i++)
    {
        Delete(Head, size-i);
        doubleDisplay(Head);
    }

    return 0;
}