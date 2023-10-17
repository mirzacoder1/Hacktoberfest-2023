#include <iostream>
using namespace std;
#include "Linked_list.h"
void lastInsert(int x)
{
    temp=new Node;
    temp->data = x;
    temp->next = NULL;
    if (first == NULL)
        first = last = temp;
    else
    {
        last->next = temp;
        last = temp;
    }
}

int main()
{
    lastInsert(23);
    lastInsert(45);
    lastInsert(24);
    lastInsert(12);
    Display(first);
    return 0;
}