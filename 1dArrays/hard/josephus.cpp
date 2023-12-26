#include<iostream>
using namespace std;

int main()
{
  int is_removed[199] = {0};
  int N, K;

  cin >> N >> K;

  int soldiers_standing = N;
  int current_position = 0;

  while (soldiers_standing)
  {
    int current_k = K;

    if (K % soldiers_standing == 0)
      current_k = soldiers_standing;
    else 
      current_k = K % soldiers_standing;

    int k_moves = 0;
    int last_person = -1;
    while (k_moves < current_k) {
      if (is_removed[current_position] == 0) {
        last_person = current_position, k_moves++; 
      }
      current_position = (current_position + 1) % N;
    }
    is_removed[last_person] = -1;
    soldiers_standing--;
    cout << last_person + 1 << endl;
  }

  return 0;
}
