#include<iostream>
using namespace std;
int nCr(int n,int r){
    if (r==0||r==n)
    {
        return 1; 
    }
    else
    {
        return nCr(n-1,r)+nCr(n-1,r-1);
    }
}
int main(){
    cout<<nCr(5,4);
return 0;
}