#include <iostream>
using namespace std;
int pow(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return pow(a, b - 1) * a;
}

int power(int a, int b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 1)
        return power(a * a, b / 2) * a;
    else if (b % 2 == 0)
        return power(a * a, b / 2);
}
int main()
{
    cout << pow(2, 3) << endl
         << power(2, 3);
    return 0;
}