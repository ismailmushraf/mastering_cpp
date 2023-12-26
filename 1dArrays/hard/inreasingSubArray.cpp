#include <iostream>
using namespace std;

int main() 
{
  int arr[199];
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int result = 0;
  int len = 1;

  for (int i = 1; i < n; i++)
  {
    if (arr[i-1] < arr[i])
    {
      result += len;
      len++;
    } else 
    {
      len = 1;
    }
  }

  cout << result + n << endl;
  return 0;
}
