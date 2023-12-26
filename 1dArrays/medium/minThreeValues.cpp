#include<iostream>
using namespace std;

int main() 
{
  int N;
  cin >> N;

  int arr[N];

  for (int i = 0; i < N; i++)
    cin >> arr[i];
  
  int min1 = arr[0], min2 = arr[1], min3 = arr[2];
  
  for (int i = 3; i < N; i++) 
  {
    if (arr[i] < min1)
    {
      min1 = arr[i];
    } 
    else if (arr[i] < min2) 
    {
      min2 = arr[i];
    } 
    else if (arr[i] < min3)
    {
      min3 = arr[i];
    }
  }

  cout << min1 << " " << min2 << " " << min3 << " ";
  cout << endl;

  return 0;
}
