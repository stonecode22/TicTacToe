#include <iostream>
using namespace std;

char one[12];
char two[12];
char board[3][3];
int row, column;

char intro();
void table();

int main()
{
  cout << "A game of Tic Tac Toe" << endl;
  intro();
    cout << "You're up first, " << one << ". You are X." << endl;
    cout << "Enter a row: ";
    cin >> row;
    cout << endl << "Enter a column: ";
    cin >> column;
    table();
}

  
char intro()
{
  cout << "Enter name, Player 1!" << endl;
  cin.get(one, 12);
  cin.get();
  cout << "Welcome, " << one << "!" << endl;

  cout << "Enter name, Player 2!" << endl;
  cin.get(two, 12);
  cin.get();
  cout << "A worthy opponent, " << two << "!" << endl;
  return 0;
}

void table()
{
  cout << " " << "1" << "2" << "3" << endl;
  cout << "A" << board[0][0] << board[0][1] << board[0][2] << endl;
  cout << "B" << board[1][0] << board[1][1] << board[1][2] << endl;
  cout << "C" << board[2][0] << board[2][1] << board[2][2] << endl;
}




