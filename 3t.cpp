//By Stone Yang
/*A program created to have two players play Tic Tac Toe*/
#include <iostream>
using namespace std;

char one[12];
char two[12];
char board[3][3];
int xwin = 0;
int owin = 0;

//list of functions to call
char intro();
void table();
int turnA();
int turnB();
int win();

int main()
{
  char markx = 'X';
  char marko = 'O';
  cout << "A game of Tic Tac Toe" << endl;
  intro();
  cout << "You're up first, " << one << "." << endl;
  do{
    cout << one << "'s turn." << endl;
    cout << one << ", enter a row (A, B, C): ";
    turnA();
    table();
    win();
    cout << two << "'s turn." << endl;
    cout << two << ", enter a row: ";
    turnB();
    table();
    win();
  }while(win == 0);
}

  
char intro() //getting player names
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

void table() //the game board
{
  cout << " " << "1" << "2" << "3" << endl;
  cout << "A" << board[0][0] << board[0][1] << board[0][2] << endl;
  cout << "B" << board[1][0] << board[1][1] << board[1][2] << endl;
  cout << "C" << board[2][0] << board[2][1] << board[2][2] << endl;
}

int turnA() //turn of player 1
{
  int j;
  char i;
  cin >> i; //prompt for row, loops into prompt for column
  do{
      if(i == 'A' || i == 'a')
	{
	  do
	    {
	      cout << endl << "Enter column: ";
	      cin >> j;
	      if(j <= 3)
		{
		  board[0][j-1] = markx;
		  return 0;
		}
	      else
		{
		  cout << "Invalid move: Column doesn't exist" << endl;
		  cout << "Re-enter row: ";
		  return turnA();
		}
	    }while(j > 3);
	}
  
      else if(i == 'B' || i == 'b')
	{
	  do
	    {
	      cout << endl << "Enter column: ";
	      cin >> j;
	      if(j <= 3)
		{
		  board[2][j-1] = markx;
		  return 0;
		}
	      else
		{
		  cout << "Invalid move: Column doesn't exist" << endl;
		  cout << "Re-enter row: ";
		  return turnA();
		}
	    }while(j > 3);
	}
      else if(i == 'C' || i == 'c')
	{
	  do
	    {
	      cout << endl << "Enter column: ";
	      cin >> j;
	      if(j <= 3)
		{
		  board[2][j-1] = markx;
		  return 0;
		}
	      else
		{
		  cout << "Invalid move: Column doesn't exist" << endl;
		  cout << "Re-enter row: ";
		  return turnA();
		}
	    }while(j > 3);
	}
      else
	{
	  cout << "Invalid move: Row doesn't exist." << endl;
	  cout << "Re-enter Row: ";
	  return turnA();
	}
  }while(i != 'A', 'B', 'C');
}
  
      
  
  
int turnB() //turn of player 2
{
  int j;
  char i;
  cin >> i; //prompts for row, loops into prompt for column
  do{
    if(i == 'A' || i == 'a')
      {
	do
	  {
	    cout << endl << "Enter column: ";
	    cin >> j;
	    if(j <= 3)
	      {
		board[0][j-1] = marko;
		return 0;
	      }
	    else
	      {
		cout << "Invalid move: Column doesn't exist" << endl;
		cout << "Re-enter row: ";
		return turnB();
	      }
	  }while(j > 3);
      }
    
    else if(i == 'B' || i == 'b')
      {
	do
	  {
	    cout << endl << "Enter column: ";
	    cin >> j;
	    if(j <= 3)
	      {
		board[1][j-1] = marko;
		return 0;
	      }
	    else
	      {
		cout << "Invalid move: Column doesn't exist" << endl;
		cout << "Re-enter row: ";
		return turnB();
	      }
	  }while(j > 3);
      }
    else if(i == 'C' || i == 'c')
      {
	do
	  {
	    cout << endl << "Enter column: ";
	    cin >> j;
	    if(j <= 3)
	      {
		board[2][j-1] = marko;
		return 0;
	      }
	    else
	      {
		cout << "Invalid move: Column doesn't exist" << endl;
		cout << "Re-enter row: ";
		return turnB();
	      }
	  }while(j > 3);
      }
    else
      {
	cout << "Invalid move: Row doesn't exist." << endl;
	cout << "Re-enter row: ";
	return turnB();
      }
  }while(i != 'A', 'B', 'C');
}

int win() //win conditions
{
  char markx = 'X'
  if(board[0][0] == markx && board[0][1] == markx && board[0][2] == markx)
    {
      xwin++;
      cout << one << "has won this round!" << endl;
      cout << one << " " << xwin << " - " << two << " " << owin << endl;
    }
  else if(board[1][0] = markx && board [1][1] = markx && board [1][2] = markx)
    {
      xwin++;
      cout << one << "has won this round!" << endl;
      cout << one << " " << xwin << " - " << two << " " << owin << endl;
    }
  else if(board[2][0] = markx && board [2][1] = markx && board [2][2] = markx)
    {
      xwin++;
      cout << one << "has won this round!" << endl;
      cout << one << " " << xwin << " - " << two << " " << owin << endl;
    }
  else if(board[0][0] = markx && board [1][0] = markx && board [2][0] = markx)
    {
      xwin++;
      cout << one << "has won this round!" << endl;
      cout << one << " " << xwin << " - " << two << " " << owin << endl;
    }
  else if(board[0][1] = markx && board [1][1] = markx && board [2][1] = markx)
    {
      xwin++;
      cout << one << "has won this round!" << endl;
      cout << one << " " << xwin << " - " << two << " " << owin << endl;
    }
  else if(board[0][2] = markx && board [1][2] = markx && board [2][2] = markx)
    {
      xwin++;
      cout << one << "has won this round!" << endl;
      cout << one << " " << xwin << " - " << two << " " << owin << endl;
    }
  else
    {
      return 0;
    }
}
