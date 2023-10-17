#include <stdio.h>
void firstRepeat(int a[], int n)
{
    int freq[100];
    for (int i = 0; i < n; i++)
        freq[i] = 0;
    for (int i = 0; i < n; i++)
        freq[a[i]]++;
    for (int i = 0; i < n; i++)
    {
        if (freq[i] > 1)
        {
            printf("%d", i);
            break;
        }
    }
}
/* void repeat(int a[],int n){
    int freq[n];
    for (int  i = 0; i < n; i++)
        freq[i]=0;
    for (int i = 0; i < n; i++)
        freq[a[i]]++;
    for (int i = 0; i < n; i++)
    {
        if (freq[i]>1)
            cout<<i<<" ";
    }
} */
int main()
{
    int a[] = {1, 2, 2, 3, 4, 6, 5, 4, 6, 5, 7, 8, 9, 10};
    firstRepeat(a, sizeof(a) / sizeof(int));
    return 0;
}