#include <iostream>
#include<vector>
using namespace std;
void check(long x[], int size)
{
    long *freq = new long[size];
    int flag = 0;
    freq[size] = {0};
    for (int i = 0; i < size; i++)
        freq[x[i]]++;

    for (int i = 0; i < size; i++)
    {
        if (freq[i]>2) flag++;
    }
    if (flag != 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long *a = new long[2 * n];
        for (int i = 0; i < 2 * n; i++)
            cin >> a[i];
        check(a, 2 * n);
    }
    return 0;
}
