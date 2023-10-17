#include <iostream>
#include<iomanip>
using namespace std;

int isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1;
    int n2;
    cout<<"Enter first number\n";
    cin>>n1;
    cout<<"Enter second number\n";
    cin>>n2;
    cout<<"The prime no. between n1 and n2 are:\n";
    for (int b = n1; b <= n2; b++)
    {
        if (isprime(b))
        {
            cout<<b;
            cout<<",";
        }
    }

    return 0;
}