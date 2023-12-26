#include<iostream>
using namespace std;

int main() 
{
  cout << "Enter a number less than 1 or great than 200 to exit." << endl;
  int sequence[201] = { 0, 1, 3, 6, 2, 7 };
  int freq_map[1000] = {1, 1, 1, 1, 0, 0, 1, 1};
  
  for (int i = 6; i <= 200; i++)
  {
    int value = sequence[i-1] - (i - 1) - 1;
    if ((value < 0) || (freq_map[value] == 1))
    {
      value = sequence[i-1] + (i - 1) + 1;
    }
    sequence[i] = value;
    freq_map[value] = 1;
  }

  int n;
  while (true) 
  {
    cin >> n;
    if (n < 1 || n > 200)
      break;
    cout << sequence[n] << endl;
  }

  return 0;
}
