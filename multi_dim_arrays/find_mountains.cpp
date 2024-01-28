#include <iostream>
using namespace std;

int main() 
{
  int N, M;
  cin >> N >> M;

  int arr[N][M];

  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      cin >> arr[i][j];

  int di[8] = {1, 0, -1, 0, -1, 1, -1, 1};
  int dj[8] = {0, 1, 0, -1, -1, 1, 1, -1};
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++) 
    {
      bool is_mountain = true;
      for (int d = 0; d < 8 && is_mountain; ++d)
      {
        int val = arr[i][j];
        int ni = i + di[d];
        int nj = j + dj[d];

        if (ni < 0 || nj >= N || nj < 0 || nj >= M)
          continue;
        int neighbour_val = arr[ni][nj];

        if (val <= neighbour_val)
        {
          is_mountain = false;
          break;
        }
      }

      if (is_mountain)
        cout << i << " " << j << endl;
    }
  }
}
