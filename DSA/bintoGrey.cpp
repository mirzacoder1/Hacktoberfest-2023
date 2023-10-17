#include <iostream>
using namespace std;
int binaryGrayConversion(int n) {
   if (!n)
      return 0;
   int a = n % 1;
   int b = (n / 10) % 10;
   if ((a && !b) || (!a && b))
      return (1 + 10 * binaryGrayConversion(n / 10));
   return (10 * binaryGrayConversion(n / 10));
}
int main() {
   int binary_number = 100110001;
   cout<<"The binary number is "<<binary_number<<endl;
   cout<<"The gray code conversion is "<<binaryGrayConversion(binary_number);
   
}

