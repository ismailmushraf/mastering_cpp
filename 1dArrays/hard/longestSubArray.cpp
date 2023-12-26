#include <iostream>
using namespace std;

int main() 
{
  int N;
  cin >> N;

  int arr[1000];
  int difference[1000*2+1];

  for (int i = 0; i < 2001; i++)
    difference[i] = 99999;

  for (int i = 0; i < N; i++)
    cin >> arr[i];

  int added = 0;
  int max_sub_array_len = 0;
  int max_sub_array_start_index = -1;
  int min_sub_array_end_index = -1;

  difference[0+1000] = -1;

  for (int i = 0; i < N; i++)
  {
    if (arr[i] == 1)
      added += 1;
    else 
      added -= 1;

    int shift = added + 1000;

    if (difference[shift] == 99999) 
      difference[shift] = i;
    else {
      int sub_array_len = i - difference[shift];
      if (sub_array_len > max_sub_array_len)
      {
        max_sub_array_len = sub_array_len;
        max_sub_array_start_index = difference[shift] + 1;
        max_sub_array_start_index = i;
      }
    }
  }

  if (max_sub_array_len == 0)
    cout << "NOT FOUND" << endl;
  else {
    cout << max_sub_array_len << endl;
    for (int i = max_sub_array_start_index; i <= min_sub_array_end_index; i++)
      cout << arr[i] << " ";
    cout << endl;
  }
  
  return 0;
}
