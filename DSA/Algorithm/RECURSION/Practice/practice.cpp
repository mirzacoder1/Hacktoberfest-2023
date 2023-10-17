// Sum of N natural Numbers

/* #include <iostream>
using namespace std;
int sumRecur(int n)
{
    if (n==0)
        return 0;

    else
        return sumRecur(n - 1) + (n);
}
int sumLoop(int n){
    int i=0,s=0;
    for (i = 1; i <= n; i++)
    {
        s+=i;
    }
    return s;

}
int sumFormula(int n){
    return (n*(n+1))/2;
}
int main()
{
    int x;
    cout << "Give Your Input" << endl;
    cin >> x;
    int answer = sumRecur(x);
    cout<<answer<<" ";
    answer = sumLoop(x);
    cout << answer << " ";
    answer = sumFormula(x);
    cout<<answer<<" ";
    return 0;
} */

// Factorial of N numbers

#include <iostream>
using namespace std;
int factorialRecur(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecur(n - 1);
}
int factorialLoop(int n)
{
    int i = 1, f = 1;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    int x;
    cout << "Give Your Input" << endl;
    cin>>x;
    int answer = factorialRecur(x);
    cout << answer << endl;
    answer = factorialLoop(x);
    cout << answer;
    return 0;
}