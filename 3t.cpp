#include <iostream>
using namespace std;

char one[12];
char two[12];
char board[3][3];

char intro();
void table();
int coordx();
int coordy();

int main()
{  
  cout << "A game of Tic Tac Toe" << endl;
  intro();
  cout << "You're up first, " << one << "." << endl;
    cout << one << "'s turn." << endl;
    cout << one << ", enter a row: ";
    coordx();
    table();
    cout << two << "'s turn." << endl;
    cout << two << ", enter a row: ";
    coordy();
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

int coordx()
{
  int j;
  char i;
  cin >> i;
      if(i == 'A' || i == 'a')
	{
	  cout << endl << "Enter column: ";
	  cin >> j;
	  board[0][j-1] = 'X';
	}
  
      else if(i == 'B' || i == 'b')
	{
	  cout << endl << "Enter column: ";
	  cin >> j;
	  board[1][j-1] = 'X';
	}
      else if(i == 'C' || i == 'c')
	{
	  cout << endl << "Enter column: ";
	  cin >> j;
	  board[2][j-1] = 'X';
	}
  return 0; 
}
  
      
  
  
int coordy()
{
  int j;
  char i;
  cin >> i;
  if(i == 'A' || i == 'a')
    {
      cout << endl << "Enter column: ";
      cin >> j;
      board[0][j-1] = 'O';
    }

  else if(i == 'B' || i == 'b')
    {
      cout << endl << "Enter column: ";
      cin >> j;
      board[1][j-1] = 'O';
    }
  else if(i == 'C' || i == 'c')
    {
      cout << endl << "Enter column: ";
      cin >> j;
      board[2][j-1] = 'O';
    }
  return 0;
}
