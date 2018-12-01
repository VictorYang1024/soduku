#pragma once
#include <vector>

struct Grid {
	char Val;
	std::vector<char> AvailVal;
};

class Board {
public:
	void Init(const char(&initBoard)[9][9]);
	void Display()const;
private:
	Grid Board[9][9];
};