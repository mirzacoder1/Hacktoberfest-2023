#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  int n, len, start = 0, end;
  cin >> n;
  len = (2 * n) - 1;
  end = len - 1;
  int arr[len][len];
  while (n != 0)
  {
    for (int i = start; i <= end; i++)
    {
      for (int j = start; j <= end; j++)
      {
        if (i == start || i == end || j == start || j == end)
        {
          arr[i][j] = n;
        }
      }
    }
    start++;
    end--;
    n--;
  }
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len; j++)
    {
      cout << arr[i][j]<<" ";
    }
    cout << "\n";
  }

  return 0;
}