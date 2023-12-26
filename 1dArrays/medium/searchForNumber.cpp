#include<iostream>
using namespace std;

int main() 
{
  int N;
  cin >> N;

  int arr[N];
  int index_map[501] = {[0 ... 500] = -1};
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
    index_map[arr[i]] = i;
  }

  int Q;
  cin >> Q;

  while (Q--)
  {
    int query;
    cin >> query;

    cout << index_map[query] << endl;
  }

  return 0;
}
