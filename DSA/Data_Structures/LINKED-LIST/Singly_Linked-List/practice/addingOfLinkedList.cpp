#include <iostream>
using namespace std;
#include "linked_list.h"
int Sum(Node *p)
{
    int sum = 0;
    while (p)
    {
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int recursiveSum(Node *p)
{
    if (p)
    {
        return recursiveSum(p->next) + p->data;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 10, 9};
    int size = sizeof(a) / sizeof(int);
    create(a, size);
    cout << Sum(first) << " " << recursiveSum(first);

    return 0;
}