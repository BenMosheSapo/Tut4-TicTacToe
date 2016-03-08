#pragma once
#pragma once
#include <string>
#include <string.h>
#include <iostream>
using namespace std;
class TicTacToe
{
private:
	string Board[3][3];
public:
	TicTacToe();
	bool move(int row, int col){
		if (Board[row-1][col-1].empty()){
			if (row <= 2 && row >= 0 && col <= 2 && col >= 0){
				return true;
			}
		}
		return false;
	}
	void print(){
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
	~TicTacToe();
};

int main(){
	TicTacToe game;
	game.print();
}