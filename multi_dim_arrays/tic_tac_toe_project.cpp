#include <iostream>
using namespace std;

const int MAX = 1000;

void print_grid(int N, int matrix[MAX][MAX]);
int check_win(int N, int matrix[MAX][MAX]);

int main() 
{
  int N, i, j, player_turn = 1;
  int mat[MAX][MAX] = {0};
  char player_label = 'x';
  cin >> N;
  
  int player_won;
  while (!(player_won = check_win(N, mat)))
  {
    player_label = player_turn == 1 ? 'x' : 'o';
    cout << "Player " << player_label << " turn. Enter empty location (r, c): ";
    cin >> i >> j;
    i--, j--;
    // check if the bounds are valid and the position is empty
    if (mat[i][j] != 0 || (i < 0 || i >N) || (j < 0 || j > N)) 
    {
      cout << "Invalid input. (Already filled or position is out of bound. Try again)\n";
      continue;
    }
    mat[i][j] = player_turn;
    print_grid(N, mat);
    player_turn = player_turn == 1 ? 2 : 1;
  }
  player_label = player_won == 0 ? 'x' : 'o';
  cout << "Player " << player_label << " won\n";
}

void print_grid(int N, int matrix[MAX][MAX])
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      int val = matrix[i][j];
      if (val == 1)
        cout << "x";
      else if (val == 2)
        cout << "o";
      else 
        cout << ".";
    }
    cout << "\n";
  }
}

int check_win(int N, int matrix[MAX][MAX])
{
  // check both diagonals
  // check all rows and all cols horizontally and vertically
  
  return 0;
}
