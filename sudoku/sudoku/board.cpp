#include "board.h"




// ��ʼ������
//������һ��9*9������
//����ֵΪ1~9���ʾ�г�ʼֵ������ֵ��ʾ��ǰλ�ô��û���д
void BoardMng::Init(const char (&initBoard)[9][9])
{
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (initBoard[i][j] >= 1 && initBoard[i][j] <= 9) {
				Board[i][j] = initBoard[i][j];
				AvailVal[i][j].push_back(initBoard[i][j]);
			}
			else {
				Board[i][j] = 0;
				for (int k = 1; k <=9; k++) {
					AvailVal[i][j].push_back(k);
				}
			}
		}
	}
}

const char(&BoardMng::getBoard()const)[9][9]{
	return Board;
}

