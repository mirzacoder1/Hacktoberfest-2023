#include <iostream>
using namespace std;

// Easy Method To Solve The Taylor Series

 double ex(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0)
    return 1;
    else
    r= ex(x,n-1);
    p=p*x;
    f=f*n;
    return r+p/f;
}

double eUsingLoop(int x,int n){
    int s=1;
    for(;n>0;n--){
        s=1+x*s/n;
    }
    return s;
}
double e(int x,int n){
    static double s;
    if(n==0)
    return s;
    else
    {
        s=1+x*s/n;
        return e(x, n - 1);
    } 
}
int main(){
    int x=2;
    cout<<e(x,10)<<endl;
    cout<<ex(x,10)<<endl;
return 0;
}