#include <iostream>
using namespace std;
#include "linked_list.h"
void reverseElement(Node *p)
{
    int i = 0, a[123];
    p = first;
    while (p)
    {
        a[i] = p->data;
        p = p->next;
        i++;
    }
    p = first, i--;
    while (p)
    {
        p->data = a[i--];
        p = p->next;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6,1};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    Display(first);
    cout << endl;
    reverseElement(first);
    Display(first);
    return 0;
}