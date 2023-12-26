#include<iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int arr[N];
  int freq_map[771] = {[0 ... 770] = 0};
  for (int i = 0; i < N; i++) 
  {
    cin >> arr[i];
    freq_map[arr[i] + 500] += 1;
  }


  int most_frequent_number = arr[0];
  int mostFrequentCount = freq_map[arr[0] + 500];
  for (int i = 1; i < N; i++)
  {
    if (freq_map[arr[i] + 500] > mostFrequentCount)
    {
      most_frequent_number = arr[i];
    }
  }

  cout << most_frequent_number << endl;
  return 0;
  
}
