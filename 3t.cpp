#include <iostream>
using namespace std;

char one[12];
char two[12];
char board[3][3];
int (a*)[3] = &board[0];

char intro();
void table();
int row(a*);

int main()
{
  cout << "A game of Tic Tac Toe" << endl;
  intro();
    cout << "You're up first, " << one << ". You are X." << endl;
    cout << one << ", enter a row: ";
    row(c*);
    cout << endl << "Enter a column: ";
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

int row(a*)//row1
{
  cin >> row;
  if(i = 0; i < 3; ++i)
    {
      c* = row - 1;
    }  
      
  
  
