#include <iostream>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;

  int K;
  cin >> K;

  int current_i = 0, current_j = 0;
  int rd[4] = {-1, 0, 1, 0};
  int cd[4] = {0, 1, 0, -1};
  while (K--)
  {
    cout << "Enter Direction and Number of Steps: \n---Directions ---1. UP 2.RIGHT 3.DOWN 4.LEFT\n";
    int direction, steps;
    cin >> direction >> steps;

    --direction; // to adjust for the array index

    current_i = (current_i + rd[direction] * steps) % N;
    current_j = (current_j + cd[direction] * steps) % M;

    if (current_i < 0)
      current_i += N;
    if (current_j < 0)
      current_j += M;

    cout << "(" << current_i << "," << current_j << ")" << endl;
  }
}
