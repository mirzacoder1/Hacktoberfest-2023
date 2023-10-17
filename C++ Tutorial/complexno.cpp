#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class complex
{
    int a;
    int b;

public:
    void setData(int x1, int x2)
    {
        a=x1;
        b=x2;
    }
    void setDatabySum(complex o1,complex o2)
    {
        a=o1.a + o2.a;
        b=o1.b + o2.b;
    }

    void printNumber()
    {
        cout<<"Your Complex no. is "<<a<<"+"<<b<<"i"<<endl;
    }
};


int main()
{
complex c1,c2,c3;
c1.setData(1,2);
c1.printNumber();


c2.setData(4,10);
c2.printNumber();

c3.setDatabySum(c1,c2);
c3.printNumber();

    return 0;
}