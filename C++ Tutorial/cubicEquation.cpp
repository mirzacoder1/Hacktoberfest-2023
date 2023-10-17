#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int funcSum(int a, int b, int c)
{
    return (a * b + b * c + c * a);
}

int funcadd(int a, int b, int c)
{
    return (a + b + c);
}

int funcProduct(int a, int b, int c)
{
    return (a * b * c);
}

int main()
{
    int a;
    int b;
    int c;

    cout << "The first root is:\n";
    cin >> a;
    cout << "The second root is:\n";
    cin >> b;
    cout << "The third root is:\n";
    cin >> c;
    cout << "The final cubic expression is : x^3 - " <<funcadd(a,b,c)<< "x^2 + " << funcSum(a, b, c) << "x - " << funcProduct(a, b, c);
    return 0;
}