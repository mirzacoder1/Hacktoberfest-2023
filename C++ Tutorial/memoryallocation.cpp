#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
  void inicounter(void){ counter = 0; }
  void setPrice(void);
  void displayPrice(void);

};

void shop ::setPrice(void)
{
    cout<<"Enter Id of your item no. "<< counter + 1 << endl;
    cin>>itemId[counter];
    cout<< "Enter Price of Your item" << endl;
    cin>> itemPrice[counter];
    counter++;
}

void shop :: displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<< "The Price of item with Id "<< itemId[i]<< " is "<<itemPrice[i]<<endl;
    }
    
}
int main(){
    shop Dukaan;
    Dukaan.inicounter();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.setPrice();
    Dukaan.displayPrice();
return 0;
}