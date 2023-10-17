#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    int n, a[n], z = 0;
    cout << "Enter the order of expression:\n";
    cin >> n;
    cout << "Enter roots of the expression:\n";
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cout << "The roots are:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << endl;
        z += a[i];
    }
    cout << "The final sum of roots is:" << z << endl;

    z = 1;

    for (int i = 1; i <= n; i++)
    {
        z *= a[i];
    }
    cout << "The final product of roots is:" << z << endl;

    return 0;
}