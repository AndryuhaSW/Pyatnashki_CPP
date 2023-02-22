#include "MyTimer.h"

using namespace std;

//конструктор
MyTimer::MyTimer() {
	Sec = 0;
	Min = 0;
};

//возвращает секунды
int  MyTimer::GetSec() {
	return Sec;
};

//возвращает минуты
int MyTimer::GetMin() {
	return Min;
};

//+1 секунда
void MyTimer::PlusSec() {
	Sec++;
};

//+1 минута
void MyTimer::PlusMin() {
	Min++;
};
