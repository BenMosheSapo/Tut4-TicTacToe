#include "TicTacToe.h"
#include <string>
#include <string.h>
#include <iostream>

TicTacToe::TicTacToe()
{
	reset();
}

// This function checks if the desired move of player is legal.
//It checks if that entry of the matrix is empty
bool TicTacToe:: move(int row, int col){
	if (Board[row][col]== NULL){
		if (row <= 3 && row >= 1 && col <= 3 && col >= 1){
			return true;
		}
	}
	return false;
}
// this function prints out the board 
void TicTacToe:: print(){
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (Board[i][j]==NULL)
				cout << "-  ";
			else
				cout << Board[i][j] << "  ";
		}
		cout << endl;
	}
}
//This function sets all the entries of the matrix back to null
void TicTacToe::reset(){
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			Board[i][j] = NULL;
		}
	}
}
string TicTacToe::over(){
	int i;
	int j;
	char winner;
	for (i = 0; i < 3; i++){
		if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2]){	//Checks if one of the players has fulled up a row
			if (Board[i][0]!=NULL)
			winner = Board[i][0];
		}

		if (Board[0][i] == Board[1][i] && Board[0][i] == Board[2][i]){	//Checks if one of the players has fulled up a column
			if (Board[0][i] != NULL)
			winner = Board[0][i];
		}
	}

	if (Board[0][0] == Board[1][1] && Board[2][2]){		//Checks if player fulled up the diagonal from top left to bottom right 
		if (Board[0][0] != NULL)
		winner = Board[0][0];
	}

	if (Board[0][2] == Board[1][1] && Board[2][0]){		//Checks if player fulled up the diagonal from top right to bottom left 
		if (Board[0][2] != NULL)
		winner = Board[0][2];
	}

	if (winner == 'x')
		return "Player 1 wins";
	else if (winner == 'o')
		return "Player 2 wins";

	// If there is no winner yet

	// This will check if there is an empty entry in the matrix. if not then the game is a draw
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (move(i, j))
				return "Game is still in progress";

		}
	}

	return "Game is a draw";
}
TicTacToe::~TicTacToe()
{
}

int main(){
	TicTacToe game;
	bool flag;
	game.print();
	cout << game.over()<<endl;
}