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
	bool move(short row, short col){
		if (Board[row][col].empty()){
			if (row <= 3 && row >= 0 && col <= 3 && col >= 0){
				return true;
			}
		}
		return false;
	}
	~TicTacToe();
};

int main(){
	TicTacToe game;
	bool flag;
	flag=game.move(0,0);
	cout << flag;
}