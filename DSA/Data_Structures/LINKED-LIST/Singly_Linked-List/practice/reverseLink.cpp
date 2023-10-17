#include <iostream>
using namespace std;
#include "linked_list.h"
void reverseLink(Node *p)
{
    Node *q = NULL;
    Node *r = NULL;
    p = first;
    while (p)
    {
        /* The Code written from 12 to 15 is the code for Sliding Pointers */
        r = q;
        q = p;
        p = p->next;
        q->next = r; /* Main line to reverse the link of the linked_list */
    }
    first = q;
}

void recursiveReverseLink(Node *p, Node *q)
{
    if (p)
    {
        recursiveReverseLink(p->next, p);
        p->next = q;
    }
    else
        first=q;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    Display(first);
    cout << endl;
    reverseLink(first);
    Display(first);
    cout << endl;
    Node *q = NULL;
    recursiveReverseLink(first,q);
    Display(first);
    return 0;
}