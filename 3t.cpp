//By Stone Yang
/*A program created to have two players play Tic Tac Toe*/
#include <iostream>
using namespace std;

char one[12];
char two[12];
char board[3][3] = { ' ' };
char markx = 'X';
char marko = 'O';
int xwin = 0;
int owin = 0;
int cycx = 0;
int cyco = 0;
char plagain;


//list of functions to call
char intro();
void table();
void boardclr();
int turnA();
int turnB();
bool wincond();
bool wincond2();

int main()
{
   cout << "A game of Tic Tac Toe" << endl;
   intro();
   cout << "You're up first, " << one << "." << endl;
   do{
     boardclr();
     if(cycx + cyco == 9 && wincond() == false && wincond2() == false)
       {
	 cout << "Tie game, no one wins" << endl;
	 break;
       }
     else
       {
	 do
	   {
	     if(cycx < 5 && wincond() == false)
	       {
		 cout << one << "'s turn." << endl;
		 cout << one << ", enter a row (A, B, C): ";
		 turnA();
		 cycx++;
		 table();
		 wincond();
	       }
	     else if(wincond() == true)
	       {
		 xwin++;
		 cout << two << " has won this round!" << endl;
		 cout << one << " " << xwin << " - " << two << " " << owin << endl;
		 break;
	       }

	     if(cyco < 4 && wincond2() == false)
	       {
		 cout << two << "'s turn." << endl;
		 cout << two << ", enter a row: ";
		 turnB();
		 cyco++;
		 table();
		 wincond2();
	       }
	     else if (wincond2() == true)
	       {
		 owin++;
		 cout << two << " has won this round!" << endl;
		 cout << one << " " << xwin << " - " << two << " " << owin << endl;
		 break;
	       }
	   }while (cycx+cyco < 9 && wincond() == false && wincond2() == false);
       }
     cout << "Do you wish to play again?(Y/N)";
     cin >> plagain;
   }while(plagain != 'N'); 
   return 0;  
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
    if(i == 'A' || i == 'a') //choosing row A
	{
	  do
	    {
	      cout << endl << "Enter column: ";
	      cin >> j;
	      if(j <= 3 && board[0][j-1] != markx && board[0][j-1] != marko) //X and Os cannot be overwritten
		{
		  board[0][j-1] = markx;
		  return 0;
		}
	      else //if given invalid column or giving invalid position
		{
		  cout << "Invalid move" << endl;
		  cout << "Re-enter row: ";
		  return turnA();
		}
	    }while(j > 3);
	}
  
    else if(i == 'B' || i == 'b') //choosing row B
	{
	  do
	    {
	      cout << endl << "Enter column: ";
	      cin >> j;
	      if(j <= 3 && board[1][j-1] != markx && board[1][j-1] != marko)
		{
		  board[1][j-1] = markx;
		  return 0;
		}
	      else
		{
		  cout << "Invalid move" << endl;
		  cout << "Re-enter row: ";
		  return turnA();
		}
	    }while(j > 3);
	}
    else if(i == 'C' || i == 'c') //choosing row C
	{
	  do
	    {
	      cout << endl << "Enter column: ";
	      cin >> j;
	      if(j <= 3 && board[2][j-1] != markx && board[2][j-1] != marko)
		{
		  board[2][j-1] = markx;
		  return 0;
		}
	      else
		{
		  cout << "Invalid move" << endl;
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
  }while(i != 'A', 'a', 'B', 'b', 'C', 'c'); //keeps prompting for a valid row char if not given
}
  
      
  
  
int turnB() //turn of player 2, same structure as turnA()
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
	    if(j <= 3 && board[0][j-1] != markx && board[0][j-1] != marko)
	      {
		board[0][j-1] = marko;
		return 0;
	      }
	    else
	      {
		cout << "Invalid move" << endl;
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
	    if(j <= 3 && board[1][j-1] != markx && board[1][j-1] != marko)
	      {
		board[1][j-1] = marko;
		return 0;
	      }
	    else
	      {
		cout << "Invalid move" << endl;
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
	    if(j <= 3 && board[2][j-1] != markx && board[2][j-1] != marko)
	      {
		board[2][j-1] = marko;
		return 0;
	      }
	    else
	      {
		cout << "Invalid move" << endl;
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
  }while(i != 'A', 'a', 'B', 'b', 'C', 'c');
}

bool wincond() //win conditions for player 1
{
  if(markx == board[0][0] && markx == board[0][1] && markx == board[0][2])
    {
      return true;
    }
  else if(board[1][0] == markx && board[1][1] == markx && board[1][2] == markx)
    {
      return true;
    }
  else if(board[2][0] == markx && board[2][1] == markx && board[2][2] == markx)
    {
      return true;
    }
  else if(board[0][0] == markx && board[1][0] == markx && board[2][0] == markx)
    {
      return true;
    }
  else if(board[0][1] == markx && board[1][1] == markx && board[2][1] == markx)
    {
      return true;
    }
  else if(board[0][2] == markx && board[1][2] == markx && board[2][2] == markx)
    {
      return true;
    }
  else if(board[0][0] == markx && board[1][1] == markx && board[2][2] == markx)
    {
      return true;
    }
  else if(board[2][0] == markx && board[1][1] == markx && board[0][2] == markx)
    {
      return true;
    }

  else
    {
      return false;
    }
}

bool wincond2()
{
   if(marko == board[0][0] && marko == board[0][1] && marko == board[0][2])
    {
      return true;
    }
  else if(board[1][0] == marko && board[1][1] == marko && board[1][2] == marko)
    {
      return true;
    }
  else if(board[2][0] == marko && board[2][1] == marko && board[2][2] == marko)
    {
      return true;
    }
  else if(board[0][0] == marko && board[1][0] == marko && board[2][0] == marko)
    {
      return true;
    }
  else if(board[0][1] == marko && board[1][1] == marko && board[2][1] == marko)
    {
      return true;
    }
  else if(board[0][2] == marko && board[1][2] == marko && board[2][2] == marko)
    {
      return true;
    }
  else if(board[0][0] == marko && board[1][1] == marko && board[2][2] == marko)
    {
      return true;
    }
  else if(board[2][0] == markx && board[1][1] == markx && board[0][2] == markx)
    {
      return true;
    }

  else
    {
      return false;
    }
}

void boardclr()
{
  char board[3][3] = { {' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '} };
  cout << " " << "1" << "2" << "3" << endl;
  cout << "A" << board[0][0] << board[0][1] << board[0][2] << endl;
  cout << "B" << board[1][0] << board[1][1] << board[1][2] << endl;
  cout << "C" << board[2][0] << board[2][1] << board[2][2] << endl;
} 
