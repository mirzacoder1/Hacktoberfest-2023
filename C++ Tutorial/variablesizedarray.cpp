#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int x,y,s=0;
    cin>>x>>y;
    int *arr[x];
    while (x--) {
        int num;
        cout<<"Enter"<<endl;
        cin>>num;
        arr[s]=new int[num];
        for (int i=0; i<num; i++) {
              cout<<"Enter:"<<endl;
              cin>>arr[s][i];
        }
        s++;
    }
    while (y--) {
               int a,b;
               cout<<"Enter :"<<endl;
               cin>>a>>b;
               cout<<arr[a][b]<<endl;
    }
    return 0;
}