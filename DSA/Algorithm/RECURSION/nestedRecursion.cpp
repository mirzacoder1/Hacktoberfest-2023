#include<iostream>
using namespace std;
int fun(int n){
    if (n>100)
    {
        return n-10;
    }
    else
    {
        return fun(fun(n+11)); 
    }   
}
int main(){
    fun(95);
    cout<<fun(95)<<" ";
    fun(96);
    cout<<fun(96)<<" ";
    fun(93);
    cout<<fun(98)<<" ";
return 0;
}