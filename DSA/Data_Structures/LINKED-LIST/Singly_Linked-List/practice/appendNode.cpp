#include <iostream>
using namespace std;
#include "linked_list.h"

void append(Node *p, Node *q)
{
    while (p->next != NULL)
        p = p->next;
    p->next = second;

}

int main()
{
    int a[] = {1, 2, 3, 4};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    int b[] = {5, 6, 7, 8};
    size = sizeof(b) / sizeof(int);
    CREATE(b, size);
    append(first, second);
    Display(first);

    return 0;
}