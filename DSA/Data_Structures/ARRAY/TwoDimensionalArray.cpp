#include <iostream>
using namespace std;
int main()
{
    /* First Method :->By Using Normal Initialization*/
    int a[3][4] = {{1, 2, 3, 4}, {3, 4, 5, 6}, {4, 5, 6, 7}};

    /* Second Method :->By Using Array Of Pointers */
    int *b[3];
    b[0] = new int[4];
    b[1] = new int[4];
    b[2] = new int[4];

    /* Third Method:->By Using Double Pointers */
    int **c;
    c = new int *[3];
    c[0] = new int[4];
    c[1] = new int[4];
    c[2] = new int[4];
    /* For Accesing Array We Can Use Nested Loop */
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>a[i][j]>>b[i][j]>>c[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<a[i][j]<<" ";
            cout<<b[i][j]<<" ";
            cout<<c[i][j]<<" ";
        }
    }
    
    return 0;
}