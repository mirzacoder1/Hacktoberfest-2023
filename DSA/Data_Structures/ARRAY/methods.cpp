#include <iostream>
using namespace std;
/* int get(int a[], int length, int index)
{
    for (int i = 0; i < length; i++)
    {
        if (index >= 0 && index <= length)
        {
            return a[index];
        }
    }
    return -1;
}

void set(int a[], int length, int index, int value)
{
    for (int i = 0; i < length; i++)
    {
        if (index >= 0 && index <= length)
            a[index] = value;
    }
} */

int min(int a[], int length)
{
    int min = a[0];
    for (int index = 1; index < length; index++)
    {
        if (a[index] < min)
        {
            min = a[index];
        }
    }
    return min;
}

/* int max(int a[], int length)
{
    int max = a[0];
    for (int i = 1; i < length; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int recursionSum(int a[], int length)
{
    if (length >=0)
        return recursionSum(a, length - 1) + a[length];
    else
        return 0;
}
int sum(int a[], int length)
{
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += a[i];
    }

    return total;
}

float avg(int a[],int length){

    int total=sum(a,length);
    return (float)total/(float)length;
} */

int main()
{
    int arr[23] = {1, 2, 12, 23, 76};
    int size = sizeof(arr) / sizeof(int);
    int index;
    // cout << recursionSum(arr, size) << " " << sum(arr,size)<<" ";
    // set(arr, size, index, 23);
    // cout << get(arr, size, index) << " " << max(arr, size) << " ";

    cout << min(arr, size);
    return 0;
}