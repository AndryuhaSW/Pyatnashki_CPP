#include "Game.h"
#include <vector>
#include <fstream>


using namespace std;

int Game::GetYourPosition(int min, int sec) {
	//„итает из файла в вектор
	//»щет сколько рекордов меньше твоего
	//заносит твой результат
	//возвращает место

	vector<int> allResults;

	int m, s;
	fstream F;
	//открываем файл в режиме чтени€
	F.open("D:\\test.txt");
	if (F)
	{
		while (!F.eof())
		{
			F >> m >> s;
			allResults.push_back(m*60 + s);
		}
		F.close();
	}

	//записываем наш результат в рейтинговую таблицу
	ofstream f;
	f.open("D:\\test.txt", ios::app);
	f << min << " " << sec << endl;
	f.close();

	//ищем свое место в таблице
	int myTime = min * 60 + sec;
	int pos = 0;
	for (int i = 0; i < allResults.size(); i++) {
		if (myTime > allResults[i])
			pos++;
	}

	return pos;
}