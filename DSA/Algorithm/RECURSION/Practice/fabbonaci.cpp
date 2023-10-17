#include <iostream>
using namespace std;
long fibRecursive(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibRecursive(n - 2) + fibRecursive(n - 1);
    }
}

long fibIterative(int n)
{
    int s = 0, t = 0, t1 = 1;
    if (n <= 1)
        return n;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            s = t + t1;
            t = t1;
            t1 = s;
        }
        return s;
    }
}

int f[10];
int Memofib(int n)
{
    if (n == 0 || n == 1)
    {
        f[n] = n;
        return n;
    }
    else
    {
        if (f[n - 2] == -1)
        {
            f[n - 2] = Memofib(n - 2);
        }
        if (f[n - 1] == -1)
        {
            f[n - 1] == Memofib(n - 1);
        }
    }
    f[n] = Memofib(n - 2) + Memofib(n - 1);
    return Memofib(n - 2) + Memofib(n - 1);
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        f[i] = -1;
    }
    int n;
    cin >> n;
    cout << "<<By Recursive Method>>" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fibRecursive(i) << " ";
    }
    cout << endl
         << "<<By Iterative Method>>" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fibIterative(i) << " ";
    }

    cout << endl
         << "Using Memoization" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << Memofib(i) << " ";
    }

    return 0;
}