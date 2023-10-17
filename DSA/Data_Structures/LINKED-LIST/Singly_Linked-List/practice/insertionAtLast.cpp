#include <iostream>
using namespace std;
#include "linked_list.h"
void Insert(int value)
{
    temp = new Node;

    temp->data = value;
    temp->next = NULL;
    last->next = temp;
}
int main()
{
    int a[] = {1, 2, 3, 4};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    Display(first);
    Insert(24);
    cout << endl;
    Display(first);
    return 0;
}