#include <stdio.h>
#include <stdlib.h>
#include "circularLinked_list.h"
void Insert(struct Node *p, int index, int value)
{
    int i;
    struct Node *temp = NULL;
    temp = (struct Node*)malloc(sizeof(struct Node));
    if (index < 0 || index > count(p))
        return;
    temp->data = value;
    if (index == 0)
    {
        last->next = temp;
        temp->next = Head;
        Head = temp;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        temp->next = p->next;
        p->next = temp;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(a) / sizeof(int);
    circularCreate(a, size);
    circularDisplay(Head);
    Insert(Head, 0, 12);
    circularDisplay(Head);
    printf("\n%d",count(Head));
    return 0;
}