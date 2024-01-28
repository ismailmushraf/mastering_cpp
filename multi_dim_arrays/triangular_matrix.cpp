#include <iostream>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int lower_sum = 0;
  int upper_sum = 0;
  int val;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> val;
      if (i <= j)
        lower_sum += val;

      if (i >= j)
        upper_sum += val;

    }
  }
  cout << lower_sum << endl;
  cout << upper_sum << endl;
  return 0;
}
