#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int funcadd(int a,int b){
    return (a+b);
}
int funcProduct(int a,int b){
    return (a*b);
}
int main()
{
    int a;
    int b;
    cout<<"The first root is:\n";
    cin>>a;
    cout<<"The second root is:\n";
    cin>>b;

    cout<<"The Sum of Roots is "<<funcadd(a,b)<<endl;
    cout<<"The Product of Roots is "<<funcProduct(a,b)<<endl;
    cout<<"The final quadratic expression is x^2 - "<<funcadd(a,b)<<"x + "<<funcProduct(a,b);
    funcadd(a,b);
    
    return 0;
}