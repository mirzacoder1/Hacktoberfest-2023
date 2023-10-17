#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  int n;
  int arr[120];
  cout << "Enter no.of elements you want:\n";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cout << "The array at " << i << " is:\n";
    cin >> arr[i];
  }
  cout << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << "\n";
  }
  return 0;
}