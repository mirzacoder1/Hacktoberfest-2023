#include<iostream>
using namespace std;
void TOH(int n,int a/* from */,int b/* Using */,int c/* To */){
    static  int i=0;
    if (n>0)
    {
        TOH(n-1,a,c,b);/* Moving Disk Form A to B using C */
        i++;
        cout<<i<<".  ("<<a<<"-->"<<c<<") "<<endl;
        TOH(n-1,b,a,c);/* Moving disk From B to C using A */
    }
}
int main(){
    TOH(2,1,2,3);    
return 0;
}