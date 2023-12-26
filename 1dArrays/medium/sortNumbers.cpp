#include<iostream>
using namespace std;

int main() 
{
  int N;
  cin >> N;

  int freq_map[501] = { [0 ... 500] = 0 };

  for (int i = 0; i < N; i++)
  {
    int temp;
    cin >> temp;

    freq_map[temp] += 1;
  }

  for (int i = 0; i <= 500; i++)
  {
    int freq_i = freq_map[i];
    for (int j = 0; j < freq_i; j++)
      cout << i << " ";
  }
  cout << endl;

  return 0;
}
