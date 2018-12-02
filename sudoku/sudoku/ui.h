#pragma once

#include "board.h"

class Ui {
public:
	void InitUiBuffer();
	void UpdateUiBuffer(int i,int j,char val);
	void InitDisplay()const;
	void UpdateDisplay()const;
private:

	BoardMng& myBoard;
	char uiBuffer[13][19] = { 0 };
};
