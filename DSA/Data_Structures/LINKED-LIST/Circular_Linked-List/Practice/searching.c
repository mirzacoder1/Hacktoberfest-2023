#include <stdio.h>
#include <stdlib.h>
#include "circularLinked_list.h"
int Search(struct Node *p, int key)
{
    int i = 0;
    do
    {
        i++;
        if (p->data == key)
        {
            return key;
            break;
        }
        p = p->next;
    } while (p != Head);
    return 0;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 9, 8};
    int size = sizeof(a) / sizeof(int);
    circularCreate(a, size);
    printf("The Value is found at index is: %d\n",Search(Head,9));
    circularDisplay(Head);
    return 0;
}