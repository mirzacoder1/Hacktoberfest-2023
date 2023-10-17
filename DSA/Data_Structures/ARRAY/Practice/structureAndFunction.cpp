/* Program in C Language */

/* #include<iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
void initialize(struct rectangle *p,int l,int b){
    p->length=l;
    p->breadth=b;
}
int area(struct rectangle p){
    return p.length*p.breadth;
}
void changeLength(struct rectangle *p,int l){
    p->length=l;
}
int main(){
    struct rectangle r;
    initialize(&r,12,34);
    cout<<area(r)<<endl;
    changeLength(&r,20);
    cout<<"New Length : "<<r.length;
return 0;
} */

/* Program in C++ Language */

/* #include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changeLength(int l)
    {
        length = l;
        cout<<length;
    }
};
int main()
{
    rectangle r;
    r.initialize(12, 34);
    cout << r.area() << endl;
    cout << "New Length : ";
    r.changeLength(20);
    return 0;
} */

/* Objet Oriented Programming in C++ */

#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;

    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    void changeLength(int l)
    {
        length = l;
        cout<<length;
    }
};
int main()
{
    rectangle r;
    r.initialize(12, 34);
    cout << r.area() << endl;
    cout << "New Length : ";
    r.changeLength(20);
    return 0;
}