#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
private:
    int a,b,c;
public:
    int d,e;
    void setData(int a1,int b1,int c1);
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
        
    }
};

void employee:: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee mirza;
    mirza.d=34;
    mirza.e=89;      
    // mirza.a=89; It shows error due to its private nature!      
    mirza. setData(1,2,4);
    mirza. getData();
return 0;
}