#include<iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int is_visited[501] = { [0 ... 500] = -1 };

  for (int i = 0; i < N; i++)
  {
    int temp;
    cin >> temp;
    if (is_visited[temp] == -1)
      cout << temp << " ";
    is_visited[temp] = 1;
  }

  cout << endl;

  return 0;
}
