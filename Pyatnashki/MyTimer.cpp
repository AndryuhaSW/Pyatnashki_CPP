#include "MyTimer.h"

using namespace std;

//�����������
MyTimer::MyTimer() {
	Sec = 0;
	Min = 0;
};

//���������� �������
int  MyTimer::GetSec() {
	return Sec;
};

//���������� ������
int MyTimer::GetMin() {
	return Min;
};

//+1 �������
void MyTimer::PlusSec() {
	Sec++;
};

//+1 ������
void MyTimer::PlusMin() {
	Min++;
};
