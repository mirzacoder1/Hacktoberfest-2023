#include<iostream>
#include<stdlib.h>
struct rectangle
{
    int length;
    int breadth;
};
struct rectangle *func(){
    struct rectangle *p;
    p=new rectangle;
    p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p->length=17;
    p->breadth=14;

    return p;
}
using namespace std;
int main(){
    struct rectangle *ptr=func();
    cout<<"Breadth:"<<ptr->breadth<<endl<<"Length:"<<ptr->length;
return 0;
}