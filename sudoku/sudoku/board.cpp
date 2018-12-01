#include "board.h"



// ��ʼ������
//������һ��9*9������
//����ֵΪ1~9���ʾ�г�ʼֵ������ֵ��ʾ��ǰλ�ô��û���д
void Board::Init(const char (&initBoard)[9][9])
{
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (initBoard[i][j] >= 1 && initBoard[i][j] <= 9) {
				Board[i][j].Val = initBoard[i][j];
				Board[i][j].AvailVal.push_back(initBoard[i][j]);
			}
			else {
				Board[i][j].Val = 0;
				for (int k = 1; k <=9; k++) {
					Board[i][j].AvailVal.push_back(k);
				}
			}
		}
	}
}

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

void Board::Display()const
{

	
	
	

}

