#include<iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int arr[N];
  int freq_map[10] = {[0 ... 9] = 0};
  for (int i = 0; i < N; i++) 
  {
    cin >> arr[i];
    int temp = arr[i];
    if (temp == 0)
      freq_map[0]++;
    while (temp > 0)
    {
      int rem = temp % 10;
      freq_map[rem] += 1;
      temp = temp / 10;
    }
  }

  for (int i = 0; i < 10; i++)
  {
    cout << i << " " << freq_map[i] << endl;
  }

  return 0;
  
}
