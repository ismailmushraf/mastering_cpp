#include <iostream>
#include <cmath>
using namespace std;

int is_prime(int num)
{
  if (num <= 1) return 0;
  for (int i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
      return 0;
  }
  return 1;
}

int main()
{
  int N, M, Q, x, y, r, c;

  cin >> N >> M;
  int a;
  int mat[N][M];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
    {
      cin >> a;
      mat[i][j] = is_prime(a);
    }

  cin >> Q;

  int prime_count;
  while (Q--)
  {
    cin >> x >> y >> r >> c;
    prime_count = 0;
    for (int i = x; i < x + r ; i++)
      for (int j = y; j < y + c; j++)
        if (mat[i][j])
        {
          prime_count++;
        }

    cout << endl << prime_count << endl;
  }
  return 0;
}
