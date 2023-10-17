#include<iostream>
using namespace std;

/* Conversion Of Class into Template Class or Generic Class */

template<class T>
class arithmetic
{
private:
    T a;
    T b;
public:
    arithmetic(T a,T b);
    T sum();
    T sub();
};

template<class T>
arithmetic<T>::arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}

template<class T>
T arithmetic<T>::sum(){
    T c=a+b;
    return c;
}

template<class T>
T arithmetic<T>::sub(){
    T c=a-b;
    return c;
}

/* Without Template Class */

/* class arithmetic
{
private:
    T a;
    T b;
public:
    arithmetic(T a,T b);
    T sum();
    T sub();
};

arithmetic::arithmetic(T a,T b)
{
    this->a=a;
    this->b=b;
}
T arithmetic::sum(){
    T c=a+b;
    return c;
}
T arithmetic::sub(){
    T c=a-b;
    return c;
} */

int main(){
    arithmetic<int> ar(4,5);
    cout<<"Sum is :"<<ar.sum()<<endl;
    cout<<"Subtraction is :"<<ar.sub()<<endl;
    arithmetic<float> arr(4.2,5.3);
    cout<<"Sum is :"<<arr.sum()<<endl;
    cout<<"Subtraction is :"<<arr.sub()<<endl;
return 0;
}