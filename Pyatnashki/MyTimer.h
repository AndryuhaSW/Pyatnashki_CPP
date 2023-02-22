#pragma once
#include <string>

//Я храню в двух переменных типа-int секунды и минуты,
//а с помощью объекта-Timer, встроенного в форму,
//который обновляется каждую секуду, манипулирую 
//переменными и получаю время
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