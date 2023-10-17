#include <iostream>
using namespace std;
#include "linked_list.h"
void insertElement_01(Node *p, int value)
{
    Node *q = NULL;
    temp = new Node;
    temp->data = value;
    temp->next = NULL;
    while (p)
    {
        if (temp->data > p->data)
        {
            q = p;
            p = p->next;
        }
        else
        {
            q->next = temp;
            temp->next = p;
            break;
        }
    }
}

void insertElement(Node *p, int value)
{
    Node *q = NULL;
    while (p && p->data < value)
    {
        q = p;
        p = p->next;
    }
    temp = new Node;
    temp->data = value;
    temp->next = q->next;
    q->next = temp;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 7, 10};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    insertElement_01(first, 6);
    insertElement(first, 8);
    insertElement_01(first, 9);
    Display(first);
    return 0;
}