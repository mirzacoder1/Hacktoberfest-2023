#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class binary
{
private:
    string s;

public:
    void chk_bin(void);
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}

void binary::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();
    cout << "The Entered Binary no.:" << endl;
    b.display();
    cout << "The Entered Binary no.After compliment is:" << endl;
    b.ones_complement();
    b.display();

    return 0;
}