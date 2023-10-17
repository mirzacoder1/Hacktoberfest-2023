#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a,count = 0,j = 1;
    label:
    cout<<"Enter the number a\n";
    cin>>a;
    while (j<=a)
    {
        if (a%j==0)
        {
            count++;
        }
        j++;
    }
    cout<<"The factor of a is:\n"<<count<<endl;
    if (count==2)
    {
        cout<<"Entered number is a prime noumber:\n";
    }
    else
    {
        cout<<"The number is a composite number:\n";
    }
    // for (int i = 1
    // ; i <= a; i++)
    // {
    //     if (a%i==0)
    //     {
    //         count++;
    //     }
    // }
    // cout<<"The factor of a is:\n"<<count<<endl;
    // if (count==2)
    // {
    //     cout<<"The number is a prime number:\n";
    // }
    // else
    // {
    //     cout<<"The number is a composite number:\n";
    // }
    
    goto label;
        
    
    return 0;
}
