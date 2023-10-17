#include<iostream>
using namespace std;
struct Array
{
    int rol;
    string name;
    float salary;
};

int main(){
    struct Array a[10];
    a[0]={123,"Mirza",1234.56};
    a[1]={1232,"Mirza",12342.56};
    a[2]={1231,"Mirza",12343.56};

    int i=0;
    while (i<3)
    {
        printf("%d %s %f\n",a[i].rol,a[i].name,a[i].salary);
        i++;
    }
    
return 0;
}