#pragma once
#include <string>
using namespace std;
class TicTacToe
{
private:
	char Board[3][3];
public:
	TicTacToe();
	bool move(int row, int col);
	void print();
	void reset();
	string over();
	void SetRowCol(int row, int col, char x);
	~TicTacToe();
};

