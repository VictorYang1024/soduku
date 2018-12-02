#pragma once
#include <vector>



class BoardMng {
public:
	void Init(const char(&initBoard)[9][9]);
	const char(&getBoard()const)[9][9];
	
private:
	char Board[9][9];
	std::vector<char> AvailVal[9][9];
};