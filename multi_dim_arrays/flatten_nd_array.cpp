#include <iostream>
using namespace std;

int main()
{
  int DEPTH, ROWS, COLS;
  cin >> DEPTH >> ROWS >> COLS;
  int choice;
  cin >> choice;
  int d, r, c, i;

  int Db = ROWS * COLS;
  int Rb = COLS;
  if (choice == 1)
  {
    cin >> d >> r >> c; 
    int pos = d * Db + r * Rb + c;
    cout << pos << endl;
  }
  else 
  {
    cin >> i; 
    d = i / Db;
    r = (i % Db) / Rb;
    c = (i % Db) % Rb;
    cout << d << " " << r << " " << c << endl;
  }
  return 0;
}
