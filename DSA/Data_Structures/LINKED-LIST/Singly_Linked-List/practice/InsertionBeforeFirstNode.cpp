#include <iostream>
using namespace std;
#include "linked_list.h"
void Insert(int value)
{
    temp= new Node;
    temp->data = value;

    temp->next = first;
    first=temp;
}

void Display(Node *p)
{
    while (p != NULL)
    {
        cout << " " << p->data << " ";
        p = p->next;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    Insert(24);
    Display(first);
    return 0;
}