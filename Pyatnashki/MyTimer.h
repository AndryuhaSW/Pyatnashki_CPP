#pragma once
#include <string>

//� ����� � ���� ���������� ����-int ������� � ������,
//� � ������� �������-Timer, ����������� � �����,
//������� ����������� ������ ������, ����������� 
//����������� � ������� �����
ref class MyTimer
{
public:
	static int Sec;
	static int Min;
public:
	MyTimer();
	static int GetSec();
	static int GetMin();
	static void PlusSec();
	static void PlusMin();
	static void SetSec(int n) {
		Sec = n;
	};
};