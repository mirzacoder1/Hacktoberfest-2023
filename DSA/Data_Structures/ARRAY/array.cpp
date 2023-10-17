#include <iostream>
using namespace std;
/* void func(int a[]){
    a[0]=45;
} */
int *func(int n)
{
    int *p;
    p = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    return (p);
}
int main()
{
    /*     int a[]={3,4,5,6,7,8};
        for (int x:a)
        cout<<x<<endl;
        func(a);
        for (int x:a)
        cout<<x<<" ";
     */
    int n;
    cin>>n;
    int *ptr;
    ptr=func(n);
    for(int x=0;x<n;x++)
    cout<<ptr[x];
    return 0;
}