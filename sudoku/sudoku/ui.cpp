#include "ui.h"
#include <windows.h>

/*
	+-----+-----+-----+
	|1 2 3|4 5 6|7 * 9|
	|1 2 3|4 5 6|7 * 9|
	|1 2 3|4 5 6|7 * 9|
	+-----+-----+-----+
	|1 2 3|4 5 6|7 * 9|
	|1 2 3|4 5 6|7 * 9|
	|1 2 3|4 5 6|7 * 9|
	+-----+-----+-----+
	|1 2 3|4 5 6|7 * 9|
	|1 2 3|4 5 6|7 * 9|
	|1 2 3|4 5 6|7 * 9|
	+-----+-----+-----+
*/

void Ui::InitUiBuffer() {
	const char(&Board)[9][9]=myBoard.getBoard();
	for (int i = 0; i < 13; i++) {//ÐÐ
		for (int j = 0; j < 19; j++) {//ÁÐ
			if (i % 4 == 1) {
				if (j % 6 == 1) {
					uiBuffer[i][j]='+';
				}
				else {
					uiBuffer[i][j]='-';
				}
			}
			else {
				if (j % 6 == 1) {
					uiBuffer[i][j]='|';
				}
				else if (j % 2 == 1) {
					uiBuffer[i][j]=' ';
				}
				else {
					char val = Board[i - i / 4 - 1][j / 2];
					if (val == 0) {
						uiBuffer[i][j]='*';
					}
					else {
						uiBuffer[i][j] = val+'0';
					}
				}
			}
		}		
	}
}

void Ui::UpdateUiBuffer(int i, int j, char val) {

}


void Ui::InitDisplay() const
{
	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 19; j++) {
			putchar(uiBuffer[i][j]);
		}
		putchar('\n');
	}
}

void Ui::UpdateDisplay() const
{
}

void Ui::ShowChar(char val)const
{
	switch (val) {
	case '+':
	case '-':
	case '|':
		break;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		break;
	case ' ':
	case '\n':
		putchar(val);
		break;
	default:
		break;
	}
}

