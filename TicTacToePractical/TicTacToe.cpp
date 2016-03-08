#include "TicTacToe.h"
#include <string>
#include <string.h>
#include <iostream>

TicTacToe::TicTacToe()
{
	Board[0][2] = "x";
}

bool TicTacToe:: move(int row, int col){
	row -= 1;
	col -= 1;
	if (Board[row][col].empty()){
		if (row <= 2 && row >= 0 && col <= 2 && col >= 0){
			return true;
		}
	}
	return false;
}
void TicTacToe:: print(){
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			if (Board[i][j].empty())
				cout << "-  ";
			else
				cout << Board[i][j] << "  ";
		}
		cout << endl;
	}
}
void TicTacToe::reset(){
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			Board[i][j] = "";
		}
	}
}
TicTacToe::~TicTacToe()
{
}

int main(){
	TicTacToe game;
	bool flag;
	flag = game.move(1, 3);
	cout << flag << endl;
	game.print();
	game.reset();
	flag = game.move(1, 3);
	cout << flag << endl;
	game.print();
}