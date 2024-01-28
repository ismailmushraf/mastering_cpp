#include <iostream>
using namespace std;

int main()
{
  int N, M, Q, q1, q2;
  cin >> N >> M;
  int mat[N][M];

  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      cin >> mat[i][j];

  cin >> Q;

  while (Q--)
  {
    cin >> q1 >> q2;
    q1--, q2--; // converting user input to 0-based index

    int smaller = 1;
    for (int j = 0; j < M; j++)
    {
      if (mat[q1][j] > mat[q2][j])
      {
        smaller = 0;
        break;
      }
    }
    if (smaller == 1)
      cout << "YES";
    else 
      cout << "NO";
    cout << endl;
  }

  return 0;
}
