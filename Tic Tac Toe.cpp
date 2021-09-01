 #include <iostream>

using namespace std;

//function prototypes
void showBoard(char[][3]);
bool checkWinner(char[][3], char);
void playerMove(char[][3], char);

int main()
{
//declare variables needed
//declare 2D array for the board
//and initialize with all *
char board[3][3] = {{'*', '*', '*'},
{'*', '*', '*'},
{'*', '*', '*'}};

int moves = 0; //variable to keep track
//of number of moves
//to determine tie

cout << "TIC - TAC - TOE\n\n";

//while loop to repeat until 9 moves are done
while(true){
//display board
showBoard(board);

cout << "Player 1 moves\n";

//get player X move
playerMove(board, 'X');

//increment moves counter
moves++;

//if this is a winning move
//store winner and terminate
if(checkWinner(board, 'X')){
showBoard(board);
cout << "\nPlayer 1 (X) wins!\n";
return 0;
}

//if 9 moves are done
//break from loop
if(moves == 9)
break;

//display board again
showBoard(board);

cout << "Player 2 moves\n";

//do the same thing for player O
playerMove(board, 'O');
moves++;
if(checkWinner(board, 'O')){
showBoard(board);
cout << "\nPlayer 2 (O) wins!\n";
return 0;
}
}

//if we have gone this far and program
//still has not terminated (no winner)
//it means this is a tie
showBoard(board);
cout << "This game is a tie!\n";

//return 0 to mark successful completion of program
return 0;
}

//this function is helpful because we need to show
//the board repetitively during the program
void showBoard(char board[][3]){
cout << endl;
//loop on the rows
for(int row = 0; row < 3; row++){
//loop on the columns
for(int col = 0; col < 3; col++)
cout << board[row][col] << " ";

//display newline after each row
cout << endl << endl;
}

cout << endl;
}

//this function checks if second argument
//is a winning player
bool checkWinner(char board[][3], char player){
//boolean variable to check
//for winner later
bool flag;

//CHECK FOR WINNER IN ROWS
for(int row = 0; row < 3; row++){
//initialize flag to true
flag = true;

//loop within a row
for(int col = 0; col < 3; col++){
//Notice that the right part of the
//assignment operator, is an expression
//with a relational operator (==)
//this expression will yield either
//true (1) or false (0)
//while flag is already true (1)
//if multiplied by true (1) will result
//in true(0), or multiplied by false (0)
//will result in false (0)
flag *= (board[row][col] == player);
}

//after checking within row, if the flag
//is still true at this point, it means we have
//three chars of the same kind within the row,
//thus we have a winner
if(flag)
return true;
else
continue;
}

//CHECK FOR WINNER IN COLUMNS
//using a similar logic
for(int col = 0; col < 3; col++){
flag = true;
for(int row = 0; row < 3; row++){
flag *= (board[row][col] == player);
}

if(flag)
return true;
else
continue;
}

//CHECK FIRST DIAGONAL (row = col)

//reset flag to true
flag = true;
//check diagonal
for(int i = 0; i < 3; i++){
flag *= (board[i][i] == player);
}
//check if there is winner
if(flag)
return true;

//CHECK OTHER DIAGONAL (row = 2 - col)

//reset flag to true
flag = true;
//check diagonal
for(int col = 0; col < 3; col++){
flag *= (board[2-col][col] == player);
}
//check if there is winner
if(flag)
return true;

//if all of these have been checked
//and function still has not returned,
//it means there is no winner
return false;
}

//this function gets a move from the player,
//checks if it is valid, and if yes it puts
//it on the board
void playerMove(char board[][3], char player){
//variables to store user move
int row, col;

//get user move
cout << "Row: ";
cin >> row;
cout << "Col: ";
cin >> col;

//check if this is valid move
//you have to check if that tile has
//already been marked, or if tile
//of choice is out of bounds of board
while(board[row-1][col-1] != '*' ||
row > 3 || row < 0 ||
col > 3 || row < 0)
{
cout << "Invalid move! Try again\n";
cout << "Row: ";
cin >> row;
cout << "Col: ";
cin >> col;
}

//after validation, mark new move
board[row-1][col-1] = player;
}
       
