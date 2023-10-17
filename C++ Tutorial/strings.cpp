#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    //  string s;
    /* Using Getline()function we can print a string with space:*/
    // getline(cin,s);
    // cout<<s;
    /* First Declaration  Then print*/
    // string a ="star";
    // cout<<a;
    /* Printing a character 'n' 5 times:*/
    // string s(5,'n');
    // cout<<s;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    s1.append(s2);/* It means s1+s2:*/
    cout<<s1<<endl;
    s1.assign("Zabbar");/* It is the another method of assigning values to the string:*/
    cout<<s1<<endl;
    s2.at(3);/* This specify aa particular position if string:*/
    s2.erase(3,1);/* erase() is used to erase the position of the string:*/
    cout<<s2<<endl;
    s1.clear();/* clear() is used to clear the string:*/
    
return 0;
}