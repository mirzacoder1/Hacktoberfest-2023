#include<iostream>
using namespace std;
#include"linked_list.h"
int isSorted(struct Node *p)
{
    int x = -65536;

    while (p != NULL)
    {
        if (p->data < x)
            return 0;
        x = p->data;
        p = p->next;
    }
    return 1;
}
int main(){
    int a[]={1,2,3,4,5,6,3,7};
    int size=sizeof(a)/sizeof(int);
    create(a,size);
    isSorted(first);
    if (isSorted(first))
        cout<<"Sorted";
    else
    cout<<"Not Sorted";
    
return 0;
}