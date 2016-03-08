#pragma once
#include <string>
using namespace std;
class TicTacToe
{
private:
	string Board[3][3];
public:
	TicTacToe();
	bool move(int row, int col);
	void print();
	void reset();
	~TicTacToe();
};

